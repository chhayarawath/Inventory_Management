#include <stdio.h>
int main()
{
    int distkm, metr, feet, inches;
    
    printf("Enter the distance in km");
    scanf("%d", &distkm);
    metr = distkm * 1000;
    feet = distkm * 3280.84;
    inches = distkm * 39370.1;

    printf(" here are your unit conversions \n %d\n %d\n %d\n ", metr, feet, inches);

    return 0;
}