/*
Given two one-dimensional arrays A and B which are sorted in ascending order program to merge
them into a signal sorted array C that contain every item for, arrays A and B, in
ascending order.

INPUT:array1:1 2 3 4 5
      array2:6 7 8 9 10

OUTPUT:array3:1 2 3 4 5 6 7 8 9 10
*/
#include<stdio.h>
int main()
{
    int ara_A[]={1,2,3,4,5},ara_B[]={6,7,8,9,10},ara_C[10];
    int i,j;
    for(i=0, j=0;i<5;i++,j++){
        ara_C[i]=ara_A[j];
    }
    for(i=5,j=0;i<10;i++,j++){
        ara_C[i]=ara_B[j];
    }
   // ara_C[i]='\0'
    printf("The content of array_C is: ");
    for(i=0;i<10;i++){
        printf(" %d ",ara_C[i]);
    }

}
