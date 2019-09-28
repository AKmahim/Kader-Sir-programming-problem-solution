#include <stdio.h>


void mat(int m1[], int r1, int c1, int b[], int r2, int c2,int size) {
    int result[size];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            int sum = 0;
            for (int k = 0; k < c2; k++) {
            sum = sum + a[i * c1 + k] * b[k * c2 + j];
            }
            result[i * c2 + j] = sum;
        }
    }
    for (int i = 0; i < size; i++) {

    if(result[i]==0){
        continue;
    }
    printf("%d ", result[i]);
  }
}

int main() {
    int r1,r2,c1,c2;
    printf("Please  enter first the matrix Row and Colum: ");
    scanf("%d %d",&r1,&c1);
    int mat1[r1*c1];
     printf("Please  enter second the matrix Row and Colum: ");
    scanf("%d %d",&r2,&c2);
    int mat2[r2*c2];

    //Input sengment
    printf("Please enter the first matrix element like (1,2,3,0,4,5,0,0,7) : ");
    for(int i=0;i<r1*c1;i++){
        scanf("%d",&mat1[i]);

    }
    printf("Please enter the second matrix element like (1,2,3,0,4,5,0,0,7): ");
    for(int i=0;i<r1*c1;i++){
        scanf("%d",&mat2[i]);

    }
    int size=r1*c2;
    printf("Multipying result of two matrix is: ");
    multiply(mat1,r1,c1,mat2,r2,c2,size);
}
