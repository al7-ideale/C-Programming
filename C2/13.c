#include <stdio.h>

int main()
{
    int n,num,rem,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    num = n;
    while (n>0)
    {
        rem = n%10;
        rev = rem + (rev*10);
        n = n/10;
    }
    if (num == rev){
        printf("%d is a palindrome.",num);
    }
    else{
        printf("%d is not a palindrome.",num);
    }
    return 0;
}