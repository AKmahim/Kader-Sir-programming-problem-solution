/*
Given an integer number, write a program that displays the number
as follows:
 First Line: all digits
 Second Line: all excepts first digits
 Third Line: all excepts first two digits
Input:12345
OUTPUT:
  First line:12345
  second lin:2345
  third line:345

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;
    gets(str);

    printf("First line: %s\n",str);
    printf("Second line: ");
    for(i=1;i<strlen(str);i++){
        printf("%c",str[i]);
    }
    printf("\nThird line: ");
    for(i=2;i<strlen(str);i++){
        printf("%c",str[i]);
    }
    return 0;


}






