#include <stdio.h>

int main()
{

    int i,divisor;
    printf("Enter the divisor: ");
    scanf("%d",&divisor);
    if (divisor>3)
        for(i=1;i<=100;i++)
        {
            if (i%divisor == 3)
                {
                    printf("%d,",i);
                }
            
        }
    else
        printf("The divisor must be greater than 3.");
    return 0;
}
