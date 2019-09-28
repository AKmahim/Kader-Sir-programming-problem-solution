/*This code is written by Mirajul Islam mahim*/

#include <stdio.h>
#include<unistd.h>

//Matrix function
void mat(int m1[],int m2[],int N,int size) {
    int result[size];
    for (int i = 0; i <N ; i++) {
        for (int j = 0; j < N; j++) {
            int sum = 0;
            for (int k = 0; k < N; k++) {
            sum = sum + m1[i * N + k] * m2[k * N + j];
            }
            result[i * N + j] = sum;
        }
    }
    for (int i = 0; i < size; i++) {

    if(result[i]==0){
        continue;
    }
    printf("%d ", result[i]);
  }
}

//Main segment

int main() {



    int N;
    printf("Please  enter the value of N(matrix row): ");   //Like input 3 for 3*3 matrix
    scanf("%d",&N);
    int lp=N*N;

    int mat1[lp];
    int mat2[lp];

    //Input sengment
    printf("Please enter  first matrix element like (1 2 3 0 4 5 0 0 7) : ");
    for(int i=0;i<lp;i++){
        scanf("%d",&mat1[i]);

    }
    printf("Please enter  second matrix element like (1 2 3 0 4 5 0 0 7): ");
    for(int i=0;i<lp;i++){
        scanf("%d",&mat2[i]);

    }
    int size=lp;
    printf("Multipying result of two matrix is: ");
    mat(mat1,mat2,N,size);
}

