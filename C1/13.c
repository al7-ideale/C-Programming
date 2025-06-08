#include <stdio.h>

int main()
{   
    int nums,i,n,highest=-99999,position=-1;
    printf("How many numbers do you want to enter?\n");
    scanf("%d",&n);
    printf("Enter %d numbers: ",n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&nums);
        if (nums > highest){
            highest = nums;
            position = i;
        }
    }
    printf("%d is the highest number and it's input position is %d\n",highest,position);
    return 0;
}