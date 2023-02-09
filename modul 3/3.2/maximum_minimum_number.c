#include<stdio.h>
void main(){
    int smallest=9,largest=0,digit,number;
    printf("enter a number :");
    scanf("%d",&number);

    while(number!=0){

        digit=number%10;
        if(digit>largest)
        largest=digit;
        if(digit<smallest)
        smallest=digit;
        number=number/10;
    }
    printf("\nlargest number is....%d",largest);
    printf("\nsmallest number is....%d",smallest);
}
