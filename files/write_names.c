// Take names from user and write them into names.txt
#include<stdio.h>


void main()
{
 FILE * fp;
 char name[30];
 int i;


    fp = fopen("names.txt", "wt");


    for(i = 1; i <= 5; i ++)
    {
        printf("Enter name :");
        gets(name);

        fprintf(fp,"%s\n",name);
    }

    fclose(fp);
}
