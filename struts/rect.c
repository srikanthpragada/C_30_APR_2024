#include<stdio.h>
struct rect
{
  int length, width;
};

int area(struct rect r)
{
   return r.length * r.width;
}

int equal(struct rect r1, struct rect r2)
{
   if (r1.length == r2.length && r1.width == r2.width)
       return 1;
   else
       return 0;
}

struct rect max(struct rect r1, struct rect r2)
{
    if (area(r1) > area(r2))
        return r1;
    else
        return r2;
}

void print(struct rect r)
{
    printf("%d X %d", r.length, r.width);
}

void main()
{
  struct rect r;
  struct rect r2 = {20, 20};
  struct rect r3 = {10, 30};

  struct rect shapes[5];


      //printf("Enter length and width :");
      //scanf("%d%d", &r.length, &r.width);
      //printf("Area = %d", area(r));

      //printf("\nEqual = %d", equal(r2, r3));

      r = max(r2, r3);
      print(r);

}
