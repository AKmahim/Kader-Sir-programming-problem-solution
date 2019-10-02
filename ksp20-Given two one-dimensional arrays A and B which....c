/*
Given two one-dimensional arrays A and B which are sorted in ascending order program to merge
them into a signal sorted array C that contain every item for, arrays A and B, in
ascending order.

INPUT:array1:1 3 4 5
      array2:2 6 7 8 9 10

OUTPUT:array3:1 2 3 4 5 6 7 8 9 10


© Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE
*/

//sorting segment
void bubble_sort(int ara[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(ara[j]>ara[j+1]){
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    }
}
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter first and second array element number(like- 4 6): ");
    scanf("%d %d",&n1,&n2);
    int ara1[n1];
    int ara2[n2];
    n3=n1+n2;
    int ara3[n3];
    int i,j;

    //Input segment start
    printf("\nEnter first array element: ");
    for(i=0;i<n1;i++){
        scanf("%d",&ara1[i]);
    }

    printf("\nEnter second array element: ");
    for(i=0;i<n2;i++){
        scanf("%d",&ara2[i]);
    }
    //Input segment End

    //array copy segment start
    j=0;
    for(i=0;i<n1;i++,j++){
        ara3[j]=ara1[i];
    }
    for(i=0;i<n2;i++,j++){
        ara3[j]=ara2[i];
    }
    //copy segment end

    bubble_sort(ara3,n3);
    printf("\n array element: ");
    for(i=0;i<n3;i++){
        printf("%d ",ara3[i]);
    }


}
