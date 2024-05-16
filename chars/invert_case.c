// Invert case of a char

#include<stdio.h>
void main()
{
 char ch;

    printf("Enter character : ");
    scanf("%c", &ch);

    if(ch >= 65 && ch <= 90)
         ch = ch + 32;
    else
      if(ch >= 97 && ch <= 122)
           ch = ch - 32;

    putchar(ch);

}
