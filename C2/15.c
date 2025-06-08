#include <stdio.h>

int fib(int);

int main()
{

    int i;
    printf("First 10 numbers of a Fibonnaci Series:");
    for (i = 0;i<10;i++)
    {
        printf("%d ", fib(i));
    }
    return 0;

}

int fib(int n)
{
    if ( n == 0 ){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return (fib(n-1) + fib(n-2));
    }
    
}