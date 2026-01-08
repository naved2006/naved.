#include<stdio.h>
#include<conio.h>

int main()
{

    float a1, a2, a3, = 0;
    clrscr();
    printf("Enter Frist Number:");
    scanf("%f", &a1);
    printf("Enter Second Number:");
    scanf("%f", &a2);

    a3 = 180 - a1 - a2;
    printf("Thrid Number or Tiangle is : %f", a3);


    return 0;
}