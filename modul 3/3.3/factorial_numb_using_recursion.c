#include<stdio.h>
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    int factn=n*fact(n-1);
    return factn;
}

void main(){
    int n;
    printf("enter number=");
    scanf("%d",&n);
    printf("factorial number is=%d",fact(n));

}