#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    printf("enter your string=");
    gets(str);
    int i;
    for (i=0 ; str[i]!='\0';i++);
    printf("your string lenght is=%d",i);
}