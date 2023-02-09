#include<stdio.h>

#define N 2//macro
struct StructureDemo
{
    char name[100];
    int roll_no;
    char branch[100];
    int sem;
};    
// }s[N];// use when user defined 

// unione
union stu_acc
{
    int fees;
    char city[100];
};

void main(){
    struct StructureDemo s[N]={{"himesh",12,"it",2},{"harry",15,"it",1}};//use for pre defined

    // for(int i=0;i<N;i++)
    // {
    //     printf("enter name: ");
    //     scanf("%s",s[i].name);
    //     printf("enter roll no: ");
    //     scanf("%d",&s[i].roll_no);
    //     printf("enter branch: ");
    //     scanf("%s",s[i].branch);
    //     printf("enter sem: ");
    //     scanf("%d",&s[i].sem);
    // }

    for(int i=0;i<N;i++)
    {
        printf("\nentered student\n=====================");
        printf("\nname :");
        puts(s[i].name);
        printf("\nroll no:%d",s[i].roll_no);
        printf("\nbranch : ");
        puts(s[i].branch);
        printf("\nsem %d\n",s[i].sem);
    }

//=================union=======================
    union stu_acc un;

    un.fees=32000;
    printf("\ndetails of student\n=====================");
    printf("\nfees :%d",un.fees);

    strcpy(un.city,"surat");
    printf("\ncity is :");
    puts(un.city);

    printf("diffrence betrween stucture and union\ndifference one");
    for (int i=0;i<N;i++)
    {
        printf("\naddress student\n================");
        printf("\nname :%p",&s[i].name);
        printf("\nroll no:%p",&s[i].roll_no);
        printf("\nbranch: %p",&s[i].branch);
        printf("\nsem:%p",&s[i].sem);
    }

    printf("\nfees :%p",&un.fees);
    printf("\ncity is:%p",&un.city);

    printf("\ndifference two");
    printf("\nsize of structure :%d",sizeof(s));
    printf("\nsize of union:%d",sizeof(un));
}