#include <stdio.h>
int main()
{
    int total_secs,hrs,mins,secs;
    printf("Enter the time in seconds: ");
    scanf("%d",&total_secs);
    hrs = total_secs/3600;
    mins = (total_secs-(3600*hrs))/60;
    secs = (total_secs-(3600*hrs))%60;
    printf("%d hours %d mins %d secs\n",hrs,mins,secs);
    return 0;
}