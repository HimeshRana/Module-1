// maximum number and minimum number
#include<stdio.h>
void main(){
    int smallest=9,largest=0,number;
    printf("enter number=");
    scanf("%d",number);

    while(number>0)
    {
        digit=number%10;
        if(digit>largest)
        largest=digit;
        if(digit<smallest)
        smallest=digit;
        number=number/10;
    }
    printf("\n largest number is....%d",largest);
    printf("\n smallest number is....%d",smallest);
}
