/*reverse number*/
#include<stdio.h>
void main(){

    int a=64728;
    int b;

    while(a!=0){
        b=a%10;
        a=a/10;
        printf("%d",b);
    }
}