#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstname[20];
    char lastname[15];
   printf("enter the firstname:");
    scanf("%s",firstname);
    printf("enter the lastname:");
    scanf("%s",lastname);
    printf("the full name is %s%s\n",firstname,lastname);

  printf("the abbrevated name  is %c %c",firstname[0],lastname[0]);


    return 0;
}
