#include<stdio.h>
struct distance
{
    int dis1;
    int dis2;
    int dis3;

};
int main()
{
    struct distance d1;
    struct distance d2;
    struct distance d3;
    d1.dis1=43;
    d2.dis2=45;
    d3.dis3=49;
    int result=d1.dis1+d2.dis2+d3.dis3;
    printf("\n THE SUM OF THREE DISTANCE IS %d ",result);
    return 0;

}