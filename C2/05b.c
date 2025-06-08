#include <stdio.h>

int pwr(int x,int y);

int main(){

    int b,p;
    printf("Enter the base number and index number: " );
    scanf("%d%d",&b,&p);
    printf("The final answer is %d ",pwr(b,p));
    return 0;
}

int pwr(int x,int y){

    if (y != 0)
        return(x * pwr(x,y-1));
    else
        return 1;
}