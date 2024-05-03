// To print the area of a circle.
#include<stdio.h>

void main()
{
  float radius, area;

    printf("Enter radius :");
    scanf("%f",&radius);

    area = 3.14 * radius * radius;

    printf("Area of circle with radius %f is %f",radius,area);
}
