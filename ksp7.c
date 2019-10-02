/*

© Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE*/


#include<stdio.h>
int main()
{
    int i,fact=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The factorial of %d is:%d",n,fact);
    return 0;
}
