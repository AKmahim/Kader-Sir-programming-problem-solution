/*This program is use to convert  fahrenheit to celsius*/
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)/1.8;
    printf("The celsius tempareture is:%.2f",celsius);
    return 0;


}

