/*

© Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE*/

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("The larsest number:%d",a);
        }
        else{
            printf("The larsest number:%d",c);
        }
    }
    else{
        if(b>a){
            if(b>c){
                printf("The larsest number:%d",b);
            }
            else
            {
                printf("The larsest number:%d",c);
            }
        }
    }
    return 0;
}
