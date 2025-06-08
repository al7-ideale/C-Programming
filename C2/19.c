#include <stdio.h>
int main(){
    FILE *fptr;
    int charcount=0;
    int linecount=0;
    fptr=fopen("19.txt","r");
    if(fptr==NULL){
        printf("Error! File not found.");
        return 1;
    }
    char op;
    op=fgetc(fptr);
    while (op!=EOF)
    {
        charcount++;
        if(op=='\n'){
            linecount++;
        }
        op=fgetc(fptr);
    }

    if (charcount > 0 && op != '\n') {
        linecount++;
    }
    printf("Characters:%d \n",charcount);
    printf("Line:%d\n",linecount);

    fclose(fptr);
    return 0;
}