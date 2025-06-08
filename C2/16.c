#include <stdio.h>

struct student{

    int roll;
    char fname[30];
    char lname[30];
    char address[30];
    int phone;
};

int main()
{   
    int n;
    printf("How many records do you want to store?\n");
    scanf("%d", &n);
    struct student rec[n];
    for (int i=0; i<n; i++){
        printf("Student %d\n",i+1);
        printf("Enter roll no.: ");
        scanf("%d", &rec[i].roll);
        printf("Enter the first name: ");
        scanf("%s",rec[i].fname);
        printf("Enter the last name: ");
        scanf("%s",rec[i].lname);
        printf("Enter address: ");
        scanf("%s",rec[i].address);
        printf("Enter phone number: ");
        scanf("%d",&rec[i].phone);
    }
    printf("\n------Students Recorded------\n");
    for (int i=0; i<n; i++){
        printf("Record no.: %d\n", i+1);
        printf("Roll no.: %d\n", rec[i].roll);
        printf("First Name: %s\t", rec[i].fname);
        printf("Last Name: %s\t", rec[i].lname);
        printf("Address: %s\t", rec[i].address);
        printf("Phone number: %d\n", rec[i].phone);
    }
    return 0;
}