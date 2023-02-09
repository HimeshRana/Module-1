#include<stdio.h>
void main(){
    int n,no,even_count=0,odd_count=0,sum_even=0,sum_odd=0;

    printf("total input number=",n);
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("\nenter no:");
        scanf("%d",&no);

        if(no%2==0){
            even_count++;
            sum_even=sum_even+no;
        }
        else
        {
            odd_count++;
            sum_odd=sum_odd+no;
        }
    }
    printf("\ncount of even no:%d",even_count);
    printf("\ncount of odd no:%d",odd_count);
    printf("\nsum of even no:%d",sum_even);
    printf("\nsum of odd no:%d",sum_odd);
}