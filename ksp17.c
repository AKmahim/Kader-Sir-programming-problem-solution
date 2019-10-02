/*
Given an integer number, write a program that displays the number
as follows:
 First Line: all digits
 Second Line: all excepts first digits
 Third Line: all excepts first two digits
Input:12345
OUTPUT:
  12345
  2345
  345
  45
  5


  © Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i,j,len;
    scanf("%s",str);
    len=strlen(str);
    printf("The Output: \n");
    for(i=0;i<len;i++){
        for(j=i;j<len;j++){
            printf("%c",str[j]);
        }
        printf("\n");
    }



    return 0;


}






