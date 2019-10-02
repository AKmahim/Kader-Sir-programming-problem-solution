/*This code is create to calculate the following harmonic series


x - x^3/3! + x^5/5! - x^7/7!   ..........


*/


#include<stdio.h>

double _pow(double x, double n){
double r = 1;
double i;
for(i = 1; i <= n; i++)
r *= x;
return r;
}

//Factorial function
double _fact(double n){
double r = 1;
double i;
for(i = 1; i <= n; i++)
r *= i;
return r;
}

double calculate(double n, double x){
double res = 0;
int i;
for(i = 1; i <= n; i++){

if(i%2 != 0){
res += (_pow(x, (2*i - 1)) / _fact(2*i - 1));
} else {
res -= (_pow(x, (2*i - 1)) / _fact(2*i - 1));
}
}
return res;
}

int main(){

double n, x;
printf("Enter the number of terms and value of x respectively: ");
scanf("%lf%lf",&n, &x);
printf("%lf\n", calculate(n, x));
return 0;
}
