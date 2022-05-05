#include <stdio.h>
int function(int);
// DISPLAYING N NATURAL NUMBER IN ASCENDING ORDER USING RECURSION

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
        function(n - 1);
        printf("%d", n);
    }
}