#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b;
    int h;
    float area;
    printf("enter the value of b:\n enter the value of h:");
    scanf("%d\n %d",&b,&h);
    area=0.5*b*h;

    printf("the area of triangle is %.4f",area);
    return 0;
}
