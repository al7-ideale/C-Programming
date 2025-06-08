#include <stdio.h>
int fact(int);
int main()
{   

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d is the factorial of %d\n",fact(n), n);
    return 0;
}

int fact(int x)
{
    if (x>=1)
        return x*fact(x-1);
    else
        return 1;
}