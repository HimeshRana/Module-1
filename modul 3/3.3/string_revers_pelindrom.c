#include<stdio.h>
#include<string.h>
void main(){

    char str[50];
    char temp[50];

    printf("enter a string=");
    gets(str);

    strcpy(temp,str);

    strrev(str);

    if(strcmp(str,temp)==0)
    {
        printf("it is pelondrom");
    }
    else
    {
        printf("it is not pelindrom");
    }
}