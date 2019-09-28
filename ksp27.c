/*Write a c program to initialize  all the diagonal of a two dimensional array to 1 and other to 0
Input:5
Output:
1 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1

*/

#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the size of matrix(n*n) : ");
    scanf("%d",&n);
    k=n+1;
    printf("Output: \n\n");
    for(i=1;i<=n;i++){
            k -= 1;
        for(j=1;j<=n;j++){
            if(i==j || j==k){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

}
