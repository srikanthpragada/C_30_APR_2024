#include<stdio.h>


int count(char s[20], char ch)
{
  int i, count = 0;

     for(i = 0; s[i] != '\0' ; i ++)
     {
        if(s[i] == ch)
           count ++;
     }

     return count;
}

void main()
{
 char st[] = "How do you do";

       printf("%d ", count(st,'o'));
}
