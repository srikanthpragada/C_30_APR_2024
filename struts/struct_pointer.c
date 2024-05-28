#include<stdio.h>
struct rect
{
  int length, width;
};

void zero(struct rect * p)
{
    p->length = 0;
    p->width = 0;
}

void main()
{
  struct rect r = {20, 20};

     zero(&r);
     printf("%d %d", r.length, r.width);
}
