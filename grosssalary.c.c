#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salary;
    float hr1;
    float mr1;
    printf("the salary is :");
    scanf("%d",&salary);
    printf("the hr1 is:");
    scanf("%f",&hr1);
    printf("the mr1 is");
    scanf("%f",&mr1);
    float mr=(mr1*salary)/100;
    float hr=(hr1*salary)/100;
    float grosssalary=salary+mr+hr;

    printf("the gross salary of the employee is %.4f",grosssalary);
    return 0;
}
