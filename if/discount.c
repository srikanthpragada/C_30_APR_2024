// Take a price and display discount
#include <stdio.h>

void main()
{
 int price;

   printf("Enter price :");
   scanf("%d",&price);

   if(price > 10000)
     printf("%d", price * 20 / 100);
   else
     printf("%d", price * 10 / 100);
}
