#include <stdio.h>

int main()
{
    int n,i,j,temp;
    printf("How many numbers do you want to enter?\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(array[j]>array[j+1])
                {
                    temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
                }
        }
    }
    printf("Sorted Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}