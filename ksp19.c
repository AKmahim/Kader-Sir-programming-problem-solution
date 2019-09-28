/* write a c program for case conversion  the inputted text for example uppercase to lowercase or lowercase to uppercase
Example:
INPUT:i love my country
OUTPUT:I LOVE MY COUNTRY
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char text[1000],ch;
    printf("Enter the that you want to conver into uppercase:\n");
    scanf(" %[^\n]",text);
    printf("The text in uppercase is:");
    for(j=0;j<strlen(text);j++){
            ch='A' + text[j] -'a';
        printf("%c",ch);
    }
    printf("\n");
}
