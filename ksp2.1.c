/*This program is use to convert celsius to fahrenheit*/
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    scanf("%f",&celsius);
    fahrenheit=1.8*celsius+32;
    printf("The fahrenheit tempareture is:%.2f",fahrenheit);
    return 0;
}
