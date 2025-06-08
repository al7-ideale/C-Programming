#include <stdio.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2,d;
    printf("Enter (x1,y1) and (x2,y2):\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("The distance between the 2 points is: %0.2f\n",d);
    return 0;
}