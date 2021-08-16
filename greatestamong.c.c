#include <stdio.h>
#include <stdlib.h>

int main()
{
int a;
int b;
int c;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the value of c:");
scanf("%d",&c);
if(a>=b && a>=c)
    printf(" a is bigger");

else if(b>=a && b>=c)
    printf(" b is bigger");


   else
    printf("c is bigger");


    return 0;
}
