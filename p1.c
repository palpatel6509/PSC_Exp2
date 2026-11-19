#include<stdio.h>
int main()
{
    float F,f,C,c; // F,f = FAHRENHEIT , C,c = CELSIUS

    printf("Enter temprature in Fehrenheit:\n");
    scanf("%f",&f);

    c = (f-32)/1.8;

    printf("Temprature in Celsius is %.2f\n",c);

    printf("Enter temprature in Celsius:\n");
    scanf("%f",&C);

    F = (1.8*C) + 32;

    printf("Temprature in Fehrenheit is %.2f\n",F);

    return 0;
}