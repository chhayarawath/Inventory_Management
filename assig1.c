#include <stdio.h>
int main()
{
    int basic_salary, da, hra, gross_salary;
    printf("Enter your basic salary");
    scanf("%d", &basic_salary);
    da = (40 * basic_salary) / 100;
    hra = (20 * basic_salary) / 100;
    gross_salary = basic_salary + da + hra;

    printf(" your gross salary is %d\n", gross_salary);

    return 0;
}