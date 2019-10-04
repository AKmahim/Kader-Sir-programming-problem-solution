#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,n=3;
    int a[3][3],b[3][3],C[3][3];

    //INPUT segment
    printf("Enter first matrix row & collum: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter second matrix row & collum: ");
    scanf("%d %d",&r2,&c2);
    printf("Enter the first Matrix element: \n");
    for(r1=0;r1<n;r1++){
        for(c1=0;c1<n;c1++){
            scanf("%d",&a[r1][c1]);
        }
    }
    printf("Enter the second Matrix element: \n");
    for(r2=0;r2<n;r2++){
        for(c2=0;c2<n;c2++){
            scanf("%d",&b[r2][c2]);
        }
    }

    //Calculation segment
    for(r1=0;r1<n;r1++){
        for(c2=0;c2<n;c2++){
            int sum=0;
            for(i=0;i<n;i++){
                sum=sum+a[r1][i]*b[i][c2];
            }
            C[r1][c2]=sum;
        }
    }

    printf("The multiply of first matrix and second matrix: \n");
    for(r1=0;r1<n;r1++){
        for(c2=0;c2<n;c2++){
            printf("%d\t",C[r1][c2]);
        }
        printf("\n");
    }


}
