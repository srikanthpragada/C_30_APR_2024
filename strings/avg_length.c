// Take names and display average length

#include<stdio.h>

void main()
{
  char name[30];
  int i, count = 0, total = 0;

     while(1)
     {
       printf("Enter name [end to stop] :");
       gets(name);

       if (stricmp(name, "end") == 0)
            break;

       total += strlen(name);
       count ++;
     }

     printf("Average Length = %f", total / (float) count);


}
