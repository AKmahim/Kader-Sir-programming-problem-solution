/*write a program in c programming language to compute the sum of a given integer number
Input: 12345
Output: 15


© Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE


*/

#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a integer number : ");
    scanf("%d",&n);
    while(n !=0 ){
        sum += n%10;
        n=n/10;
    }
    printf("The sum of a given integer number : %d",sum);
}
