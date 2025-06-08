#include <stdio.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n == 0)
        printf("%d is even",n);
    else if (n>0)
        if (n%2 == 0)
            printf("%d is Positive Even.\n",n);
        else
            printf("%d is Postive Odd.\n",n);
    else
        if (n%2 == 0)
            printf("%d is Negative Even.\n",n);
        else
            printf("%d is Negative Odd.\n",n);
    
    return 0;
}