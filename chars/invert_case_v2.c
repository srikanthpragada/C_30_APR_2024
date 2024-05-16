// Invert case of a char

#include<stdio.h>
void main()
{
 char ch;

    printf("Enter character : ");
    scanf("%c", &ch);

    if(isupper(ch))
         ch = tolower(ch);
    else
      if(islower(ch))
           ch = toupper(ch);

    putchar(ch);

}
