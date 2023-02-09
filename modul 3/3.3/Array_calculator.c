#include<stdio.h>
void main(){
    
    int a[2][3];
    int b[2][3];
    int c[2][3];
    int n,i,j;

    printf("\npress 1 for sum:");
    printf("\npress 2 for subtraction:");
    printf("\npress 3 for multiplication:\n");
    scanf("%d",&n);

    if (n < 0 || n > 3 )
    {
        printf("invalid");
    }
    
    if (n==1)
    {
        printf("\nenter value of fist matrix");
        for (int i = 0 ; i < 2 ; i++)
        {
            for (int j = 0; j < 3 ; j++)
            {
                printf("\nenter value of a=");
                scanf("%d",&a[i][j]);
            }
        }
         printf("\nenter value of second matrix");
        for (int i = 0 ; i < 2 ; i++)
        {
            for (int j = 0; j < 3 ; j++)
            {
                printf("\nenter value of b=");
                scanf("%d",&b[i][j]);
            }
        }
        printf("1st matrix is=\n");
        for (i = 0 ; i < 2 ; i++)
        {
            for (j = 0 ; j < 3 ; j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("2nd matrix is=\n");
        for (i = 0 ; i < 2 ; i++)
        {
            for (j = 0 ; j < 3 ; j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        
        for (int i = 0 ; i < 2 ; i++)
        {
            for (int j = 0 ; j < 3 ; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        printf("sum of two matrix is=\n");
        for (int i = 0 ; i < 2 ; i++)
        {
            for (int j = 0 ; j < 3 ; j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        
    }
if (n==2)
    {
        printf("\nenter value of fist matrix");
        for (int i = 0 ; i < 2 ; i++)
        {
            for (int j = 0; j < 3 ; j++)
            {
                printf("\nenter value of a=");
                scanf("%d",&a[i][j]);
            }
        }
         printf("\nenter value of second matrix");
        for (int i = 0 ; i < 2 ; i++)
        {
            for (int j = 0; j < 3 ; j++)
            {
                printf("\nenter value of b=");
                scanf("%d",&b[i][j]);
            }
        }
        printf("1st matrix is=\n");
        for (i = 0 ; i < 2 ; i++)
        {
            for (j = 0 ; j < 3 ; j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("2nd matrix is=\n");
        for (i = 0 ; i < 2 ; i++)
        {
            for (j = 0 ; j < 3 ; j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        
        for (int i = 0 ; i < 2 ; i++)
        {
            for (int j = 0 ; j < 3 ; j++)
            {
                c[i][j] = a[i][j] - b[i][j];
            }
        }
        printf("substraction of two matrix is=\n");
        for (int i = 0 ; i < 2 ; i++)
        {
            for (int j = 0 ; j < 3 ; j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        
    }
if (n==3)
    {
        printf("\nenter value of fist matrix");
        for (int i = 0 ; i < 2 ; i++)
        {
            for (int j = 0; j < 3 ; j++)
            {
                printf("\nenter value of a=");
                scanf("%d",&a[i][j]);
            }
        }
         printf("\nenter value of second matrix");
        for (int i = 0 ; i < 2 ; i++)
        {
            for (int j = 0; j < 3 ; j++)
            {
                printf("\nenter value of b=");
                scanf("%d",&b[i][j]);
            }
        }
        printf("1st matrix is=\n");
        for (i = 0 ; i < 2 ; i++)
        {
            for (j = 0 ; j < 3 ; j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("2nd matrix is=\n");
        for (i = 0 ; i < 2 ; i++)
        {
            for (j = 0 ; j < 3 ; j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        
        for (int i = 0 ; i < 2 ; i++)
        {
            for (int j = 0 ; j < 3 ; j++)
            {
                c[i][j] = a[i][j] * b[i][j];
            }
        }
        printf("multiplication of two matrix is=\n");
        for (int i = 0 ; i < 2 ; i++)
        {
            for (int j = 0 ; j < 3 ; j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        
    }        
}