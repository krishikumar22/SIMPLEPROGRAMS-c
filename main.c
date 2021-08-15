#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    float area;
    float perimeter;
    const float pi=3.14;
    printf("enter the value of r");
    scanf("%d",&r);
    area=pi*r*r;
    perimeter=2*pi*r;


    printf("area and perimeter is %.2f %.2f",area,perimeter);
    return 0;
}
