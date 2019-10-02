/*


© Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE*/

#include<stdio.h>
int main()
{
    double a,b,c,r1,r2,d;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=(pow(b,2)-(4*a*c));
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    if(a!=0 && d>0){
        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }
    else{
        printf("Calculation Impossible\n");
    }
   return 0;
}

