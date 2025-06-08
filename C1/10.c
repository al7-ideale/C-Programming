#include <stdio.h>

int main(){
    
    int nums[5];
    int poscount = 0, negcount = 0;
    printf("Enter any 5 numbers:\n");

    for(int i = 0;i<5;i++){
        scanf("%d",&nums[i]);
        if (nums[i]!=0)
            if (nums[i]>0)
                poscount +=1;
            else
                negcount +=1;
    }
    printf("Total Postive Numbers: %d\nTotal Negative Number: %d\n",poscount,negcount);
    return 0;
}