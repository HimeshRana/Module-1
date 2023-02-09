#include<stdio.h>
void main(){
    int a,b;

    // printf("enter the value of a=");
    // scanf("%d",&a);
    // printf("enter the value of b=");
    // scanf("%d",&b);
    // a=a+b;
    // b=a-b;
    // a=a-b;
    // printf("after swapping a number a=%d and b=%d",a,b);
    

    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    printf("\nafter swapping a number a=%d and b=%d",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nafter swapping a number a=%d and b=%d",a,b);
}
