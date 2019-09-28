/*
Write a program in C to find the factorial of an integer using
recursive function.
INPUT:5
OUTPUT:the factorial of 5 is:120
*/
#include<stdio.h>

int factorial(int n);



int main()
{
    int n;
    scanf("%d",&n);
    printf("The factorial of %d is :%d",n,factorial(n));
    return 0;
}
int factorial(int n)
{
    if(n==0){
       return 1;
    }
    return n*factorial(n-1);
}
