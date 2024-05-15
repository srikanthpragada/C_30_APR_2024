// Count no. of uppercase letters

#include<stdio.h>
void main()
{
 char ch;
 int count = 0, i;


    printf("Enter characters : ");
    for(i = 1; i <= 10 ; i ++)
    {
      ch = getche();
      if (ch >= 65 && ch <= 90)
        count++;
    }

    printf("\nCount = %d", count);

}
