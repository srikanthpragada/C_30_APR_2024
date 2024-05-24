#include<stdio.h>


int get_space_pos(char s[20])
{
  int i;

     for(i = 0; s[i] != '\0' ; i ++)
     {
        if(s[i] == ' ')
            return i;
     }

     return -1; // space not found
}

void main()
{

  char s[] = "Hello C";

       printf("%d ", get_space_pos(s));
}
