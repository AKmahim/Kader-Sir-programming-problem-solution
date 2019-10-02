/* write a c program for case conversion  the inputted text for example uppercase to lowercase or lowercase to uppercase
Example:
INPUT:i love my country
OUTPUT:I LOVE MY COUNTRY


© Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char text[1000],ch;
    printf("Enter the text you want to convert into uppercase or lowercase: ");
    scanf(" %[^\n]",text);
    int n;
    int len=strlen(text);

    printf("Enter 1 to convert text into uppercase or enter 2 for convert text into lowercase: ");
    scanf("%d",&n);
    if(n ==1){
        printf("The text in uppercase is:  ");

    for(j=0;j<len;j++){
            ch='A' + text[j] -'a';
        printf("%c",ch);
    }
    printf("\n");
    }
    else{
         printf("The text in lowercase is:  ");

        for(j=0;j<len;j++){
                ch='a' + text[j] -'A';
            printf("%c",ch);
        }
        printf("\n");
    }


}
