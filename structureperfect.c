#include<stdio.h>
struct student
{
    int roll;
    char name[20];
};
void main()
{
    struct student s1={11,"pankaj"};
    struct student s2={22,"neeraj"};
    printf("\n ROLL OF FIRST STUDENT IS %d",s1.roll);
    printf("\n NAME OF FIRST STUDENT IS %s",s1.name);
    printf("\n ROLL OF SECOND STUDENT IS %d",s2.roll);
    printf("\n NAME OF SECOND STUDENT IS %s",s2.name);

}