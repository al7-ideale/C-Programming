#include <stdio.h>

int main() {
    int num1,num2;
    printf("Enter the two numbers: ");
    scanf("%d%d", &num1,&num2);
    if (num2 % num1 == 0)
        printf("They are multiples.\n");
    else
        printf("They are not multiples.\n");

    return 0;
}