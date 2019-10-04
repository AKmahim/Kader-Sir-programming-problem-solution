/*

Write a program to find the first n
Fibonacci numbers.
INPUT:5
OUTPUT:1 1 2 3 5

© Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE

*/

#include<stdio.h>
int main()
{
    int f,s,sum,i,n;
    scanf("%d",&n);
    printf("First %d fibonacci is:  ",n);
    s=0;
    f=1;
    i=0;
    do{
        sum=f+s;
        f=s;
        s=sum;
        printf("%d ",sum);
        i++;
    }
    while(i<n);

    return 0;


}

