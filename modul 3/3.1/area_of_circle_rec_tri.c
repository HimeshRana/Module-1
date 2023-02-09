// area of circle,rectangle,triangle
#include<stdio.h>
void main(){
    float r;
    float pi=3.14;
    float l,b;
    float br,h;
    printf("enter the value of radius r=");
    scanf("%f",&r);
    printf("enter the value of lenght l=");
    scanf("%f",&l);
    printf("enter the value of breadth b=");
    scanf("%f",&b);
    printf("enter the value of base br=");
    scanf("%f",&br);
    printf("enter the value of height h=");
    scanf("%f",&h);
    printf("\narea of circle is %f",(pi*r*r));
    printf("\narea of rectangle is %f",(l*b));
    printf("\narea of triangle is %f",(0.5*br*h));
}
