// Take 5 names and display the largest

#include<stdio.h>

void main()
{
  char name[30], largest[30];
  int i;


     // set it to empty
     largest[0] = '\0';

     for(i = 1; i <= 5; i ++)
     {
       printf("Enter name :");
       gets(name);

       if (strcmp(name, largest) > 0)
            strcpy(largest, name);

     }

     puts(largest);


}
