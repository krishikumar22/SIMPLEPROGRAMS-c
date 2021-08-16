#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    if(a%2==0){
        printf("even");
    }
    else
        printf("odd");
    return 0;
}
