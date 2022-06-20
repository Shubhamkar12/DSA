#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct block
{
	struct block *prev,*next;
	char songsname[];
}track;

track* start(track *ptrear)
{
	track *curr;
	*curr=ptrear->next;
	return curr;
}

track* jump(track *ptrear)
{
	int i,pos;
	char ch;
	track *curr=curr(&ptrear);
	printf("\nIn which position u want to move? ");
	scanf("%d",&pos);
	printf("\nFor forward direction press F and for backward press B");
	scanf("%c",ch);
	if(ch=='F')
	{
		for(i=1;i<=pos;i++)
			curr=curr->next;
	}
	if(ch=='B')
	{
		for(i=1;i<=pos;i++)
			curr=curr->prev;
	}
	return curr;			
}

track* next(track *ptrear)
{ 
	track *curr=curr(&ptrear);
	curr=curr->next;
	return curr;	
}

track* prev(track *ptrear)
{
	track *curr=curr(&ptrear);
	curr=curr->prev;
	return curr;	
}

track* first(track *ptrear)
{
	track *curr;
	curr=ptrear->next;
	return curr;
}

track* last(track *ptrear)
{
	track *curr;
	*curr=ptrear;
	return curr;
}

void addafter(track *ptr,char newsong[])
{
	track *tmp;
	tmp=(track*)malloc(sizeof(track));
	tmp->songsname=newsong;
	tmp->next=ptr->next;
	tmp->prev=ptr;
	(ptr->next)->prev=tmp;
	ptr->next=tmp;
}
void addbefor(track *ptr,char newsong[])
{
	track *tmp;
	tmp=(track*)malloc(sizeof(track));
	strcpy(tmp->songsname,newsong);
	ptr=ptr->prev;
	tmp->next=ptr->next;
	tmp->prev=ptr;
	(ptr->next)->prev=tmp;
	ptr->next=tmp;
}
void remove(track *ptr)
{
	(ptr->prev)->next=ptr->next;
	(ptr->next)->prev=ptr->prev;
	free(ptr);
}
void ll_to_file(node *ptrhead)
{
	FILE *fp=fopen("songs.txt","r+");
	node *ptr=ptrhead;
	while(ptr!=NULL)
	{
		fwrite(ptr,sizeof(node),1,fp);
		ptr=ptr->next;
	}
	fclose(fp);
	printf("\nLinked list data is written to the file....");
}
void file_to_ll(node **ptrhead)
{
	node s1;
	node *ptr;
	node *tmp=(node*)malloc(sizeof(node));
	strcpy(tmp->songname,s1.songname);
	tmp->next=NULL;
	FILE *fp=fopen("songs.txt","r+");
	while(fread(&s1,sizeof(node),1,fp))
	{
		if(*ptrhead==NULL)	
		{
			*ptrhead=tmp;
		}
		else
		{
			ptr=*ptrhead;
			while(ptr->next!=NULL)	
				ptr=ptr->next;
			ptr->next=tmp;
		}
	}
	printf("\nFile data is written in to the linked list....");
	fclose(fp);
}
track* userguide(track *ptrear,char ch)
{
	track *tmp;
	switch(ch)
	{
		case 'S':
				tmp=start(&ptrear);
					break;
		case 'J':
				tmp=jump(&ptrear);
					break;
		case 'N':
				tmp=next(&ptrear);
					break;
		case 'p':
				tmp=prev(&ptrear);
					break;
		case 'F':
				tmp=first(&ptrear);
					break;
		case 'L':
				tmp=last(&ptrear);
					break;
		case 'A':
				tmp=addafter(&ptr,newsong[]);
					break;
		case 'B':
				tmp=addbefor(&ptr,newsong[]);
					break;
		case 'R':
				tmp=remove(&ptr);
					break;
	}
	return tmp;
}
