// Take a price and qty and display net amount
#include <stdio.h>

void main()
{
 int price, qty, amount, net_amount;

   printf("Enter price and qty :");
   scanf("%d%d",&price, &qty);

   amount = price * qty;

   if(qty >= 3)
     net_amount = amount * 60 / 100;
   else
    if(qty >= 2)
      net_amount = amount * 80 / 100;
    else
      net_amount = amount * 90 / 100;

   printf("Net Amount : %d", net_amount);
}
