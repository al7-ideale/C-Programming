#include <stdio.h>

int main()
{
    int divisor, dividend;
    printf("Enter dividend and divisor: ");
    scanf("%d%d",&dividend,&divisor);
    if (dividend%divisor == 0)
        printf("%d/%d = %d",dividend,divisor,dividend/divisor);
    else
        printf("Divison not possible.");
    return 0;
}