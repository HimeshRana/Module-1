// opraters
// arithmetic oprators : +,-,*,/,%(modulus)
/*
Type casting;-
implicit : small size to big size (automatic)
explicit : big to small
*/

#include<stdio.h>
void main(){

  float a=11,b=3;

  printf("\naddition is %d",a+b);
  printf("\nsub is %d",a-b);
  printf("\nmulti is %d",a*b);
  // float c=(float)a/b; option 1
  printf("\ndiv is %f",(float)a/b);
  printf("\nmodulus is %d",a%b);
}