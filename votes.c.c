#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age>0 || age<18)
    printf("not eligible for vote");
else if (age>=18 && age<=100)
    printf("eligible for vote");
else{
    printf("not eligible");
}
    return 0;
}
