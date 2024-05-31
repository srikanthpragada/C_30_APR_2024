// Read products from products.dat
#include<stdio.h>
#define FILENAME "products.dat"

struct product
{
    char name[20];
    int price;
};


void main()
{
 FILE * fp;
 struct product p;
 int count;


    fp = fopen(FILENAME, "rb");
    if(fp == NULL)  // file is not opened
    {
        printf("Sorry! <%s> is not found!", FILENAME);
        exit(1); // terminate program
    }

    while(1)
    {
        count = fread(&p, sizeof(struct product), 1, fp);
        if(count == 0)  // EOF
            break;

        printf("%-20s %6d %6.0f\n",p.name, p.price, p.price * 1.12);
    }


    fclose(fp);

}
