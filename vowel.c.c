#include <stdio.h>
#include <stdlib.h>

int main()
{


int n;
printf("ENTER THE VALUE OF n:");
scanf("%d",&n);
if(n>=97 && n<=122)
    printf(" lowercase");
else if(n>=65 && n<=90)
{
    printf("uppercase");
}
else{
    printf("not a alphabet");
}
    return 0;
    }
