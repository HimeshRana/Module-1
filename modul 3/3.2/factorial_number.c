#include<stdio.h>
void main(){
    int fact=1;
    int i,n;

    printf("\nenter the number :");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        fact=fact*i;
    printf("\nfactorial number is=%d",fact);
    }
}