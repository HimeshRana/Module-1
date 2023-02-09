#include<stdio.h>
void main(){
    float p,t,r,c;

    printf("\nenter the value of principle amount p=");
    scanf("%f",&p);
    printf("\nenter the value of loan tenure t=");
    scanf("%f",&t);
    printf("\nenter the value of rate of interst r=");
    scanf("%f",&r);
    c=(float)p*t*r/100;
    printf("simple interst is=%f",c);
}