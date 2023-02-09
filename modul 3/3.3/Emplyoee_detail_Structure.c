#include<stdio.h>
#include<string.h>

#define N 2
struct Structure
{
    char name[100];

    char address[100];
    int age;

} s[N];

void main()
{

    for (int i = 0; i < N; i++)
    {
        printf("\n\nDetail of emplyoee no.%d\n", i + 1);

        printf("enter employee name=");
        gets(s[i].name);
        printf("enter age=");
        scanf("%d", &s[i].age);
        printf("enter address=");
        getchar();
        gets(s[i].address);
    }
 printf("\n=======enterd emplyoee Detail============\n");
    for (int i = 0; i < N; i++)
    {
        printf("Detail of emplyoee no.%d\n", i + 1);
        printf("name =");
        puts(s[i].name);
        printf("age=%d",s[i].age);
        printf("\naddress=");
        puts(s[i].address);
        printf("\n=====================");
    }
}