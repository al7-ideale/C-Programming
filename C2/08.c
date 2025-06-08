#include <stdio.h>

int main(){

    int n,count=1,i,j;
    printf("Enter N: ");
    scanf("%d",&n);
    for (i = 1;i<=n;i++)
    {   
        for (j = 1; j<=i;j++,count++)
        {
            printf("%d\t",count);
        }
        printf("\n");
    }
    return 0;
}