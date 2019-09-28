/* This program is use to copy one string and count the number of charecter copied
Example:
INPUT:Bangladesh
OUTPUT:Bangladesh
       count:10

*/
#include<stdio.h>
int main()
{
    int i,j,count=0;
    char str1[]="Bangladesh",str2[100];
    for(i=0,j=0;i=3;i++){
        str2[j]=str1[i];
        j++;
        count++;
    }
    printf("The copied string is:%s\n",str2);
    printf("The amount of copied charecter:%d\n",count);
    return 0;
}
