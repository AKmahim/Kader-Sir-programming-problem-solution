/*

Write a program to find the first n
Fibonacci numbers.
INPUT:5
OUTPUT:1 1 2 3 5

*/

#include<stdio.h>
int main()
{
    int f,s,sum,i,n;
    scanf("%d",&n);
    printf("First %d fibonacci is:  ",n);
    s=0;
    f=1;
    for(i=1;i<=n;i++){
        sum=f+s;
        f=s;
        s=sum;
        printf("%d ",sum);
    }
    return 0;


}

