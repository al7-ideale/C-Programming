#include <stdio.h>

int main()
{
    int i, sum=0;
    for(i=1;i<=100;i++)
    {
        sum = sum + i;
    }
    printf("The sum of first 100 natural numbers is %d.",sum);
    return 0;
}