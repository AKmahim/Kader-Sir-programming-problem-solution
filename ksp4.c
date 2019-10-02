/*

© Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE*/

#include<stdio.h>
int main()
{
  float p;
  int i;
  printf("Input a floating number :");
  scanf("%f",&p);
  i=p;
  p =p- i;
  printf("Integer part : %d\nFloat part : %.2f",i,p);
  return 0;
}

