/*


   � Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE

*/


#include<stdio.h>
int main()
{
    int i,n;
    float sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+(1.0/i);
    }
    printf("The sum is:%.3f",sum);
    return 0;
}
