// To check whether the given character is alphabet , special character or digit.
// Date - 15.05.2024

#include<stdio.h>
void main()
{
 char character;

    printf("Enter character : ");
    scanf("%c", &character);

    if(character >= 'A' && character <= 'Z' || character >= 'a' && character <= 'z')
       printf("Alphabet");
    else
      if(character >= '0' && character <= '9')
         printf("Digit");
      else
         printf("Other Character");
}
