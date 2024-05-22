
#include<stdio.h>

// user-defined function
void print_num_type(int num)
{
   if(num % 2 == 0)
      printf("Even");
   else
      printf("Odd");
}

void main()
{
 int a = 100;

   print_num_type(a);
   print_num_type(21);

}
