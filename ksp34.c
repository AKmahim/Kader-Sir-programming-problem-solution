/*This code is written to append one file at the end of another

   © Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE

*/
#include<stdio.h>
int  main()
{
    FILE *fp1,*fp2;
    fp1 = fopen("main_file.txt","a");
    fp2 = fopen("append_file.txt","r");

    char line[1000];
    fgets(line,1000,fp2);
    fputs(line,fp1);
    fclose(fp1);
    fclose(fp2);

    return 0;


}
