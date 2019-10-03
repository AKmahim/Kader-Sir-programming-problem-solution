/*

Write a program in c to open a file named INVENTORY and store in it the following data:


Name  Number  Price  Quantity
AAA-1 01      20.5   5
BBB-2 21      62.3   8
CCC-3 51      7.2    10


Extend the program to read this data file named
INVENTORY and display the value of each item.

   © Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE
*/

#include<stdio.h>
int main()
{
    FILE *in;
    in = fopen("INVENTORY.txt","w");
    char data[4][2000];
    printf("Enter th data:\n");
    int i;
    for(i=0;i<4;i++){
        gets((data[i]));
    }

    for(i=0;i<4;i++){
        fprintf(in,"%s\n",data[i]);
    }
    fclose(in);
    in = fopen("INVENTORY.txt","r");
    char file_data[4][2000];
    for(i=0;i<4;i++){
        fgets(file_data[i],2000,in);
    }

    for(i=0;i<4;i++){
        printf("%s\n",file_data[i]);
    }

    fclose(in);

}
