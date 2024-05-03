// Print square of a number

#include <stdio.h>

void main()
{
  int num, result; // declare variables

    // input
    printf("Enter a number :");  // prompt
    scanf("%d",&num);            // read input from keyboard


    // process
    result = num * num;

    // output
    printf("Square of %d is %d", num, result);

}
