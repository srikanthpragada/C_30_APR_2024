// Write name into names.txt until end is given
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


    fp = fopen(FILENAME, "wb");
    if(fp == NULL)  // file is not opened
    {
        printf("Sorry! <%s> is not found!", FILENAME);
        exit(1); // terminate program
    }

    while(1)
    {
        printf("Enter name [end to stop]:");
        gets(p.name);
        if(stricmp(p.name, "end") == 0)
           break;

        printf("Enter price :");
        scanf("%d",&p.price);

        fflush(stdin);  // clear keyboard buffer

        fwrite(&p, sizeof(struct product), 1, fp);
    }


    fclose(fp);

}
