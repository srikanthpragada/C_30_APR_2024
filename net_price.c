// Take price and display net price

#include <stdio.h>

void main()
{

 int price, discount, net_price;

    printf("Enter price :");
    scanf("%d", &price);

    discount =  price * 15 / 100;
    net_price = price - discount;

    printf("Price      : %5d\n", price);
    printf("-Discount  : %5d\n", discount);
    printf("Net Price  : %5d\n", net_price);

}
