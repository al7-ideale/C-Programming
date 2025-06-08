#include <stdio.h>

int main()
{
    float cm, in;
    printf("Enter distance in centimetres: ");
    scanf("%f",&cm);
    in = cm/2.54;
    printf("%0.2f cm = %0.2f inches",cm,in);
    return 0;
}