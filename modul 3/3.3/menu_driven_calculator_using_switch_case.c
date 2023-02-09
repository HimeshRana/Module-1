/*menu driven calculater using switch case*/
#include<stdio.h>
void main(){

    int a,b;
    int choice; 
    printf("kindly choose below option\n1.addition\n2.substraction\n3.multiplication\n4.divison\n");
    printf("enter your choice=");
    scanf("%d",&choice);

    printf("enter value of a=");
    scanf("%d",&a);
    printf("enter value of b=");
    scanf("%d",&b);

    switch (choice)
    {
        case 1:
        printf("\nsum is=%d",a+b);
        break;
        case 2:
        printf("\nsubstaction is=%d",a-b);
        break;
        case 3:
        printf("\nmultiplication is=%d",a*b);
        break;
        case 4:
        printf("\ndivision is=%f",(float)a/b);
        break;
        default:
        printf("invalid input");
        break;
    }

}