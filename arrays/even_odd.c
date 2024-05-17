// Create an array of 10 elements, store random value and display
// even numbers first and then odd numbers

#include<stdio.h>
void main()
{
  int a[10], i, even = 0;


    srand(time(0)); // set seed

    for(i = 0; i < 10; i ++)
    {
        a[i] = rand() % 100;
        printf("%5d", a[i]);

        if(a[i] % 2 == 0)
             even ++;
    }

    printf("\nEvens = %d, Odds = %d", even, 10 - even);


}
