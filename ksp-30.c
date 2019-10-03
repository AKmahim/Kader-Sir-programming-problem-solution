/*This code is written by Mirajul Islam Mahim

This program is used to take a student name and their three subject mark


© Mirajul Islam Mahim
   Student at Mohammadpur Kendriya college
   Dept. of CSE
*/


#include<stdio.h>

//struct declare
typedef struct
{
    int m1,m2,m3;
    char name[40];

}std;


std cl[100];
std temp; //this temporary variable is for swapping the struct location
//std s;


//sorting algorithm--bubble sort
/*void sort(int n)
{

    int i,j,total1,total2;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){

            if(cl[j].m1+cl[j].m2+cl[j].m3 < cl[j+1].m1+cl[j+1].m2+cl[j+1].m3){
                temp=cl[j];
                cl[j]=cl[j+1];
                cl[j+1]=temp;
            }
        }
    }
}
*/

//Selection sort
void sort(int n)
{
    int i,j,index;
    for(i=0;i<n-1;i++){
        index=i;
        for(j=i+1;j<n;j++){
            if(cl[j].m1+cl[j].m2+cl[j].m3 > cl[index].m1+cl[index].m2+cl[index].m3){
                index=j;
            }
        }
        if(i != index){
                temp=cl[index];
                cl[index]=cl[i];
                cl[i]=temp;
        }
    }

}





int main()
{
    int i,n;
    printf("Enter total student number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter student name: ");
        scanf("%s",cl[i].name);
        printf("Enter student mark: ");
        scanf("%d%d%d",&cl[i].m1,&cl[i].m2,&cl[i].m3);
    }

    //Here will go the sorting function
    sort(n);
    printf("\nAll student and marks in sorted order: \n\n");
    for(i=0;i<n;i++){
        printf("student name: ");
        printf("%s\n",cl[i].name);
         printf("student mark: ");
        printf("%d %d %d\n\n",cl[i].m1,cl[i].m2,cl[i].m3);
    }
}
