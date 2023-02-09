#include<stdio.h>
void main(){
    int i,j,k;
    for(int i=1;i<=2;i++)
    {
        for(int j=2;j>i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i*2-1;k++)
        {
            printf("*");
        }
    printf("\n");
    }
}