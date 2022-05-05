#include<stdio.h>
// CHECK THE FACTORIAL OF A GIVEN NUMBER USING RECURSION
int factorial(int);
int main()
{
    int n,f;
    printf("ENTER ANY NUMBER TO CHECK IT'S FACTORIAL: ");
    scanf("%d",&n);
    f=factorial(n);
    printf("\n THE FACTORIAL OF THE NUMBER IS %d",f);
    return 0;

}
int factorial(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return n*factorial(n-1);

}