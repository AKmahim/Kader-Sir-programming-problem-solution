#include <stdio.h>


void mat(int m1[], int m2[],int N,int size) {
    int result[9];
    for(int h=0;h<9;h++){
        result[h]=0;
    }

    for (int i = 0; i <N; i++) {

        for (int j = 0; j<N-1; j++) {
            int sum = 0;
         for(int k=0;k<N;k++){
            sum = sum + m1[N * i - (i-1)*i/2 + (j-i)] * m2[k*N+j];
         }
          result[i * N + j)] = sum;
        }
    }




    //OUTPUT segment
    for (int i = 0; i < 9; i++) {
    printf("%d ", result[i]);
  }
}

int main() {
    int N=3;
    //printf("Please  enter the value of N: ");
    //scanf("%d",&N);
    int lp=N*(N+1)/2;
    int mat1[]={9,8,10,10,17,5};
    int mat2[]={1,2,3,4,5,7};

    //Input sengment
    //printf("Please enter  first matrix element: ");
    /*for(int i=0;i<lp;i++){
        scanf("%d",&mat1[i]);

    }
    printf("Please enter  second matrix element");
    for(int i=0;i<lp;i++){
        scanf("%d",&mat2[i]);

    }*/
    int size=lp;
    printf("Multipying result of two matrix is: ");
    mat(mat1,mat2,N,size);
}

