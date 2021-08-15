#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p;
    int n;
    float r;
    float si;
    printf("the p is:");
    scanf("%d",&p);
    printf("the n is:");
    scanf("%d",&n);
    printf("the r is:");
    scanf("%f",&r);
    si=(p*n*r)/100;
    printf("the simple interest is %.3f",si);
    return 0;
}
