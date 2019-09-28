#include<stdio.h>
int main()
{
    int i,n;
    int sum=0;
    scanf("%d",&n);
    for(i=1;i<=(2*n)-1;i=i+2){
        sum=sum+i;
    }
    printf("The sum is:%d",sum);
   return 0;
}