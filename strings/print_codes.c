// Take name and print vertically

#include<stdio.h>

void main()
{
  char name[30];
  int i;

    printf("Enter your name :");
    gets(name);

    for(i = 0; name[i] != '\0'; i ++)
        printf("%c %d\n", name[i], name[i]);

}
