// Read names from names.txt
#include<stdio.h>


void main()
{
 FILE * fp;
 int ch;

    fp = fopen("names.txt", "rt");

    while(1)
    {
       ch = fgetc(fp);
       if(ch == EOF)  // End-of-file
           break;

       putch(ch);
    }

    fclose(fp);
}
