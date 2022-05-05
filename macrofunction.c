#include<stdio.h>
#define RACER ( year%4 == 0 )
int func(int);
int main()
{
    int year,function;
    printf("\n ENTER THE YEAR TO BE CHECKED = ");
    scanf("%d",&year);
    function=func(year);
}
int func(int year)
{
    if RACER
    printf("\n ENTERED YEAR IS A LEAP YEAR ");
    else
    printf("\n ENTERED YEAR IS NOT A LEAP YEAR ");
    return RACER;

}
