/*This program take three string and concatenate this three string and copy it into another string.
Example:
INPUT:
sheikh
mahim
hossen
OUTPUT:

sheikhmahimhossen


© Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE

*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,a,b;
    char first_name[100],middle_name[100],last_name[100],name[301];
    printf("Enter the first_name data:");
    scanf(" %[^\n]",first_name);
    printf("Enter the middle_name data:");
    scanf(" %[^\n]",middle_name);
    printf("Enter the last name data:");
    scanf(" %[^\n]",last_name);
    for(i=0,j=0;i<strlen(first_name);i++){
        name[j]=first_name[i];
        j++;
    }
    for(k=0,a=strlen(first_name);k<strlen(middle_name);k++){
    name[a]=middle_name[k];
        a++;
    }
    int l;
    for(l=0,b=(strlen(first_name)+strlen(middle_name));l<strlen(last_name);l++){
        name[b]=last_name[l];
        b++;
    }
    b='NULL';
    printf("The name is:%s",name);

}
