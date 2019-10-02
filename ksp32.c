/*This code is written for copy one file data into another file


   © Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *in,*out;
    char file_in[]="main_file.txt";
    char file_out[]="copy_file.txt";
    int ch;
    in=fopen(file_in,"r");
    if(in==NULL){
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    out=fopen(file_out,"w");

    while(1){
        ch=fgetc(in);
        if(ch== EOF){
            break;
        }
        fputc(ch,out);
    }

    fclose(in);
    fclose(out);


}
