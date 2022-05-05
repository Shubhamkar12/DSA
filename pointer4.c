#include<stdio.h>
int main()
{
    int a=29,b=65,*ptr=&a,*ptr2=&b;

    printf("\n ADDRESS OF A IS %d",ptr);
    printf("\n ADDRESS OF B IS %d",ptr2);

    printf("\n ADDRESS OF PTR IS %d",&a);
    printf("\n ADDRESS OF PTR2 IS %d",&b);

    printf("\n VALUE OF PTR IS %d",*ptr);
    printf("\n VALUE OF PTR2 IS %d",*ptr2);

    return 0;
    
}