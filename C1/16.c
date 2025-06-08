#include <stdio.h>

int main()
{
    int i,n;
    printf("Till which number: ");
    scanf("%d",&n);
    for (i = 1;i<=n;i++)
    {
        printf("Number = %d, Square = %d, Cube = %d\n",i,i*i,i*i*i);
    }
    return 0;
}