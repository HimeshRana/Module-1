// year into days and days into year
#include<stdio.h>
void main(){

    float year,days;

    printf("enter the year to convet into days=");
    scanf("%f",&year);
    printf("enter the days to convet into year=");
    scanf("%f",&days);
    printf("\nconveted value of year into days=%f days",year*365);
    printf("\nconveted value of days into year=%f year",days/365);

}