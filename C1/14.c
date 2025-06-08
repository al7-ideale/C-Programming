#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates x and y: ");
    scanf("%d%d",&x,&y);
    if (x==0 && y==0)
        printf("(%d,%d) lies on origin.",x,y);
    else if (x == 0)
        printf("(%d,%d) lies on y-axis",x,y);
    else if (y == 0)
        printf("(%d,%d) lies on x-axis",x,y);
    else if (x>0 && y>0)
        printf("(%d,%d) lies in 1st Quadrant.",x,y);
    else if (x<0 && y>0)
        printf("(%d,%d) lies in 2nd Quadrant.",x,y);
    else if (x<0 && y<0)
        printf("(%d,%d) lies in 3rd Quadrant.",x,y);
    else
        printf("(%d,%d) lies in 4th Quadrant.",x,y);
    return 0;
}