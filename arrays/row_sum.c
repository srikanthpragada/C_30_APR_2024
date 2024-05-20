// Create an array of 5 X 5 and store values into it and display it along
// with sum for each row

#include<stdio.h>

void main()
{
  int a[5][5], r, c, total = 0;


    srand(time(0)); // set seed

    for(r = 0; r < 5; r ++)
    {
       total = 0;
       for(c = 0; c < 5; c++)
       {
        a[r][c] = rand() % 100;
        printf("%5d", a[r][c]);
        total = total + a[r][c];
       }
       printf("%5d\n", total);
    }


}
