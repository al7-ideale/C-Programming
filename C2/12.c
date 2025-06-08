#include <stdio.h>

int main(){

    int n,num, cube=0,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    num = n;
    while (n > 0){

        r = n % 10;
        cube = cube + r*r*r;
        n = n/10;
    }
    if (num == cube){
        printf("%d is an armstrong number.",num);
    }
    else{
        printf("%d is not an armstrong number.",num);
    }
    return 0;
}