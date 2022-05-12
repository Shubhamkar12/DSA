#include<stdio.h>
int fibo(int);
int main()
{
    int i=0,f;

    f=fibo(i);
    return 0;

}
int fibo(int i)
{
    int a=0,b=1,c;
    for(i=0;i<=10;i++)
    {
        c=a+b;
        printf("\n %d",c);
        a=b;
        b=c;
    }
    return 0;
    
}