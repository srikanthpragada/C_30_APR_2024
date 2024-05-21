// Take a string and count words

#include<stdio.h>

void main()
{
  char st[30];
  int i, words = 1;


    printf("Enter string :");
    gets(st);

    for(i = 0; st[i] != '\0'; i ++)
    {
        if (st[i] == ' ')
             words ++;
    }

    printf("Words = %d", words);
}
