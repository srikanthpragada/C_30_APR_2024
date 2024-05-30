// Search for name in names.txt
#include<stdio.h>
#define FILENAME "names.txt"

void main()
{
 FILE * fp;
 char name[30], search_name[30], * p;
 int found = 0;

    fp = fopen(FILENAME, "rt");
    if(fp == NULL)  // file is not opened
    {
        printf("Sorry! <%s> is not found!", FILENAME);
        exit(1); // terminate program
    }

    printf("Enter search name :");
    gets(search_name);

    while(1)
    {
        p = fgets(name,30,fp);  // read a line
        if(p == NULL)  // EOF
            break;

        // remove newline from name
        name[strlen(name)-1] = '\0';

        // printf("%s %d\n",name, strlen(name));

        if(stricmp(name, search_name) == 0)
        {
            printf("Found!");
            found = 1; // True
            break;
        }
    }

    if(!found)
        printf("Sorry! [%s] name not found", search_name);

    fclose(fp);

}
