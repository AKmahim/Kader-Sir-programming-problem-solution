#include<stdio.h>
int main()
{
    int i,n;
    int sum=0;
    scanf("%d",&n);
    for(i=12;i<=n*n;i=i+10){
        sum=sum+i;
    }
    printf("The sum is:%d",sum);
    return 0;
}


