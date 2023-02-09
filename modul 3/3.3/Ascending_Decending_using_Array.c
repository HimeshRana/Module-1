#include<stdio.h>
void main(){

    int a[5],i;
    printf("enter array element=\n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<=4;i++)
    {
        for(int j=i+1;j<=4;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("asending order of element=");
    for(int i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }


    for(int i=0;i<=4;i++)
    {
        for(int j=i+1;j<=4;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("desending order of element=");
    for(int i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
}
