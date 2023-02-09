#include<stdio.h>
void main(){
    int a=1,b=1,c;
    int n;
    printf("enter a number :");
    scanf("%d",&n);

    for(int i=1;i<n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("\n%d",a);
    }
}