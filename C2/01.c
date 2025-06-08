#include <stdio.h>

int main()
{
    int a,b,sign;
    printf("Enter any two integers: ");
    scanf("%d%d",&a,&b);
    printf("What do you want to perform?\nEnter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Divison\nEnter 5 for Modulo Divison\n");
    scanf("%d",&sign);
    switch (sign)
    {
    case 1:
        printf("%d + %d = %d",a,b,a+b);
        break;
    case 2:
        printf("%d - %d = %d",a,b,a-b);
        break;
    case 3:
        printf("%d * %d = %d",a,b,a*b);
        break;
    case 4:
        printf("%d / %d = %d",a,b,a/b);
        break;
    case 5:
        printf("%d %% %d = %d",a,b,a%b);
        break;
    default:
        printf("Enter a valid operator: ");
        break;
    }
    return 0;
}