#include<stdio.h>
#include<conio.h>

int main()
{

    float C , F = 0;
    clrscr();
    printf("Enter Temperature in Celsius C:");
    scanf("%f", &C);

    F = (9 * C)/5 + 32;
    printf("TEmperature in Fahrenheit is : %f", F);

    return 0;

}