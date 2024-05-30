// Read filename from user and count lines
#include<stdio.h>


void main()
{
 FILE * fp;
 char filename[30];
 int ch, count = 0;

    printf("Enter filename :");
    gets(filename);

    fp = fopen(filename, "rt");
    if(fp == NULL)  // file is not opened
    {
        printf("Sorry! %s is not found!", filename);
        exit(1); // terminate program
    }

    while(1)
    {
       ch = fgetc(fp);
       if(ch == EOF)  // End-of-file
           break;

       if(ch == 10)  // \n
          count ++;
    }

    fclose(fp);
    printf("Line count = %d", count);
}
