// Take product id and display details

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
 int count, pos, id;


    fp = fopen(FILENAME, "rb");
    if(fp == NULL)  // file is not opened
    {
        printf("Sorry! <%s> is not found!", FILENAME);
        exit(1); // terminate program
    }

    printf("Enter product id :");
    scanf("%d",&id);

    pos = (id - 1) * sizeof(struct product);
    fseek(fp, pos, SEEK_SET);  // move file pointer to the required location

    count = fread(&p, sizeof(struct product), 1, fp);
    if(count == 1)
       printf("%-20s %6d %6.0f\n",p.name, p.price, p.price * 1.12);
    else
       printf("Sorry! Invalid Product Id");

    fclose(fp);

}
