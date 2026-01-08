#include<stdio.h>
#include<conio.h>

int main()
{

    float h,b, area = 0;
    clrscr();
    printf("Enter Value of h:");
    scanf("%f", &h);
    printf("Enter Vlaue of b:");
    scanf("%f", &b);
    area = h * b / 2;
    printf("Area of Triangle is:%f",area);

    return 0;

}