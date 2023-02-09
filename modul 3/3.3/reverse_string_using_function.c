#include<stdio.h>
void reverse(char s[],int i)
{
    if(s[i]=='\0')
    return;
    reverse(s,i+1);
    printf("%c",s[i]);
}
void main(){
    char str[100];
    printf("enter string=");
    gets(str);
    printf("reverse string is=");
    reverse(str,0);
}