/*
This code written to calculate the sum of all element in the array using pointer_safety

Input: 1 2 3 4 5
Output:15

   © Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE

*/

#include<stdio.h>
int main()
{
    int i,n,*p;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    int ara[n];
    p=ara;
    int sum=0;

    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    printf("Enter the element: ")
    for(i=0;i<n;i++){
        //printf("%d ",*(p + i));
        sum += *(p + i);
    }
    printf("The sum of all element is : %d",sum);


}
