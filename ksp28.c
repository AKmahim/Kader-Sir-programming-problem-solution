/*Write a c program to a string is palindrome or not
Input : eye
Output: eye is a palindrome.
Input : mahim
Output: mahim is not a palindrome.
*/
#include<stdio.h>
#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    int len,i,j;
    printf("Enter a word for checking is it palindrome or not : ");
    scanf("%s",str1);
    len=strlen(str1);

    for(i=len-1,j=0;i>=0;i--,j++){
        str2[j]=str1[i];
    }
    if(strcmp(str1,str2) == 0){
        printf("%s is a palindrome\n");
    }
    else{
        printf("%s is not a palindrome\n");
    }

}
