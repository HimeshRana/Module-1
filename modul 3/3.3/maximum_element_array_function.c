#include<stdio.h>

int max_no(int a[], int n)
{
    int i,j,max=0;
    for (i=0;i < n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int main(){
    int a[5],n;
    for (int i=0; i < 5;i++)
    {
        printf("enter value of number=");
        scanf("%d",&a[i]);
    }
    printf("\nthe maximum number in the arry is:%d",max_no(a,5));
}