#include<stdio.h>
int main()
{
    int i,n;
    int sum=0;
    scanf("%d",&n);
    for(i=2;i<=2*n;i=i+2){
        sum=sum+i;
    }
    printf("The sum is:%d",sum);
    return 0;
}


