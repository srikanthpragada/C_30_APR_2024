// Create an array of 5 X 5 and store values into it and search for a number

#include<stdio.h>

void main()
{
  int a[5][5], r, c, sn, found = 0;


    srand(time(0)); // set seed

    for(r = 0; r < 5; r ++)
    {
       for(c = 0; c < 5; c++)
       {
        a[r][c] = rand() % 100;
        printf("%5d", a[r][c]);
       }
       printf("\n");
    }

    printf("\nEnter search number :");
    scanf("%d",&sn);


    for(r = 0; r < 5 && found == 0; r ++)
    {
       for(c = 0; c < 5; c++)
       {
         if(a[r][c]  == sn)
         {
             printf("\nFound at %d,%d\n",r,c);
             found = 1;
             break;
         }
       }
    }

    if(!found)
       printf("\nNot found!\n");


}
