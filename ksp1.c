/*


© Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE

*/


#include<stdio.h>
#define pi 3.14159
int main()
{
    double r,area,c;
    scanf("%lf",&r);
    area=pi*r*r;
    c=2*pi*r;
    printf("The area of the circle is:%.2lf\n",area);
    printf("The circumference of the circle is:%.2lf\n",c);
    return 0;
}
