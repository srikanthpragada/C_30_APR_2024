// Take price and display net price

#include <stdio.h>

void main()
{

 int price, discount, discounted_price, tax, net_price;

    printf("Enter price :");
    scanf("%d", &price);

    discount =  price * 15 / 100;
    discounted_price = price - discount;

    tax = discounted_price * 12 / 100;
    net_price = discounted_price + tax;


    printf("Price          : %5d\n", price);
    printf("-Discount      : %5d\n", discount);
    printf("After discount : %5d\n", discounted_price);
    printf("+Tax           : %5d\n", tax);
    printf("Net Price      : %5d\n", net_price);

}
