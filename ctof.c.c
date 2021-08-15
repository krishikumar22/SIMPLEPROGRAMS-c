#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius;
    float far;
    printf("enter the value in celsius: C");
    scanf("%f",&celsius);
    far=(1.8*(celsius))+32;
    printf("the farenheit is %.3f",far);
    return 0;
}
