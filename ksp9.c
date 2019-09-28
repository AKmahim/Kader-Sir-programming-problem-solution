#include<stdio.h>
int main()
{
    int i,n,bi;
    int ara[100];
    printf("Enter a Decimal number : ");
    scanf("%d",&n);
    i=0;

    while(n !=0)
    {
        bi=n%2;
        ara[i]=bi;
        n=n/2;
        i++;

    }
    printf("The number in binary : ");
    for(--i;i>=0;i--){
        printf("%d",ara[i]);
    }


}
