#include <stdio.h>

int main()
{
    int n, digit, sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n < 500 && n > 0)
    {
        while (n > 0)
        {
            digit = n%10;
            sum = sum + digit;
            n = n/10;
        }
        printf("Sum = %d\n",sum);
    }
    else
        printf("Number must be less than 500 and Postive.");
    return 0;
}