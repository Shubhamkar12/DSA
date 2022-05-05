#include <stdio.h>
int function(int);
// DISPLAYING N NATURAL NUMBER IS DESCENDING ORDER USING RECURSION

int main()
{
    int n;
    printf("ENTER THE VALUE OF N = ");
    scanf("%d ",&n);
    function(n);
    return 0;
}
void function(int n)
{
    if (n == 0)
        return;
    else
    {
        printf("%d", n);
        function(n - 1);
    }
}