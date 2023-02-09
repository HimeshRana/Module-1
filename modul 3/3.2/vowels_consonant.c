/* vowels:a,e,i,o,u
and all others are consonant
*/
#include<stdio.h>
void main(){
    char ch;
    printf("\n enter the character=");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("vowels!!!");
    }
    else
    {
        printf("consonant");
    }
}