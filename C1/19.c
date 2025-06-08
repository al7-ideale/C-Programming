#include <stdio.h>

int main()
{
    int n,ldigit,rev=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while (n>0)
    {
        ldigit = n%10;
        rev = rev*10 + ldigit;
        n = n/10;
    }
    printf("Reversed Number is %d\n",rev);
}