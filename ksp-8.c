/*write a program in c that an integer as input and print it in reverse order

Example:
INPUT:12345
OUTPUT:54321


© Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE
*/
#include<stdio.h>
int main()
{

    int rev,n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    rev=0;
    while(n !=0){
          rev=rev*10;
          rev=rev+n%10;
           n=n/10;
        }
        printf("The reverse of the number is : %d\n",rev);

    return 0;
}
