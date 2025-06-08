#include <stdio.h>

int main()
{
    int score;
    printf("Enter the score of the student: ");
    scanf("%d",&score);
    if (score >= 80) {
        printf("Distinction");
    } 
    else if (score > 70) {
        printf("First Divison");
    } 
    else if (score > 55) {
        printf("Second Divison");
    } 
    else if (score > 40) {
        printf("Third Divison");
    } 
    else {
        printf("Fail");
    }
    return 0;
}