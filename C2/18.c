#include <stdio.h>

int main()
{
   char filename [50];
   char op;
   FILE *fptr;
   printf("Enter the file name: ");
   scanf("%s",filename);

   fptr = fopen(filename,"r");
   if(fptr == NULL)
   {
      printf("Error! File not found.");   
      return 1;           
   }

   printf("\nContents of file: %s\n", filename);
   op=fgetc(fptr);
   while (op!=EOF)
   {
      printf("%c",op);
      op= fgetc(fptr);
   }
   

   fclose(fptr);
   return 0;
}