// Take two strings and show relationship

#include<stdio.h>

void main()
{
  char s1[30], s2[30];
  int result;


    printf("Enter first string :");
    gets(s1);

    printf("Enter second string :");
    gets(s2);

    result = strcmp(s1,s2);

    if(result == 0)
        puts("Both are same!");
    else
        if(result > 0)
           puts("First string is bigger!");
        else
           puts("Second string is bigger!");


}
