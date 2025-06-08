#include <stdio.h>

int main()
{
    int total_days,remaining_days,years,months,days;
    printf("Enter the total number of day: ");
    scanf("%d",&total_days);
    years = total_days/365;
    remaining_days = total_days%365;
    months = remaining_days/30;
    days = remaining_days%30;
    printf("%d years, %d months and %d days\n",years,months,days);
    return 0;
}