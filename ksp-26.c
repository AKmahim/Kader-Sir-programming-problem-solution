/*This code written for calculate the standard deviation of n item.
Theory:
standard deviation = √(variance);
   σ = √(V/n)

   variance += (each item - average of all number)²


   INPUT:
   1 2 3 4 5
   OUTPUT:Standard deviation :1.41421


   © Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE
*/
#include<stdio.h>
#include<math.h>

//function for calculation
double SD(double ara[],int n)
{
    int i;
    double sum=0.0,variance=0.0;
    for(i=0;i<n;i++){
        sum += ara[i];

    }
    double avg;
    avg = sum/n;
    for(i=0;i<n;i++){
        variance += pow((ara[i] - avg),2);
    }
    return sqrt(variance/n);
}


//main function
int main()
{
    int i,n;
    printf("Enter how many item you want to input - n like 10 : ");
    scanf("%d",&n);
    double ara[n];
    printf("Enter %d integer number: \n",n);
    for(i=0;i<n;i++){
        scanf("%lf",&ara[i]);
    }
    printf("The standard deviation of this all number is : %.5lf\n",SD(ara,n));

}
