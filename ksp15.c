/*

©  Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE

*/


#include<stdio.h>
int main()
{
    int i,n;
    int sum=0;
    scanf("%d",&n);
    for(i=13;i<=n*n*n;i=i+10){
        sum=sum+i;
    }
    printf("The sum is:%d",sum);
    return 0;
}



