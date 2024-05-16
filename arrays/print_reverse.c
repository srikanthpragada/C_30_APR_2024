// Create an array and store values into it and display it in reverse


#include<stdio.h>
void main()
{
  int a[5], i;


    for(i = 0; i < 5; i ++)
    {
        printf("Enter number :");
        scanf("%d", &a[i]);
    }


    for(i = 4; i >= 0; i --)
    {
        printf("%d\n", a[i]);
    }


}
