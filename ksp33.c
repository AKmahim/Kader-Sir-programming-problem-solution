/*This code written to read a data from keyboard ,write it in a file called input.txt
Again read the same data from input.txt file and print it on screen

   © Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE
*/

#include<stdio.h>
int main()
{
    FILE *in;
    char text[1000];
    in = fopen("input.txt","w");
    printf("Enter some text for input.txt file: ");
    gets(text);
    fprintf(in,"%s",text);
    fclose(in);
    in = fopen("input.txt","r");
    char new_text[1000];
    fgets(new_text,1000,in);
    printf("This text is display from input.txt file: %s",new_text);
    fclose(in);

}
