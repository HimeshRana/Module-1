#include<stdio.h>
void main(){
    int H;
    printf("enter the case number=");
    scanf("%d",&H);

    switch (H)
    {
        case 1:
        printf("its sunday!!!");
        break;
        case 2:
        printf("its monday!!!");
        break;
        case 3:
        printf("its tuesday!!!");
        break;
        case 4:
        printf("its wednsday!!!");
        break;
        case 5:
        printf("its thursday!!!");
        break;
        case 6:
        printf("its friday!!!");
        break;
        case 7:
        printf("its saturday!!!");
        break;

        default:
        printf("invalid input");
        break;
    }
}