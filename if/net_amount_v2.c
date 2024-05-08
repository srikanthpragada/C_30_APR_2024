// Take a price and qty and display net amount
#include <stdio.h>

void main()
{
 int price, qty, amount, discount, net_amount;

   printf("Enter price and qty :");
   scanf("%d%d",&price, &qty);

   amount = price * qty;

   switch(qty)
   {
       case 1 : discount = amount * 10 / 100;
                break;
       case 2 : discount = amount * 20 / 100;
                break;
       default: discount = amount * 40 / 100;
   }


   net_amount = amount - discount;

   printf("Net Amount : %d", net_amount);
}
