#include<stdio.h>

typedef struct  family
{
    char wife_name[20];
    int n_child;
    char child_names[10][20];
}family;
typedef union details
{
    family fam;
    char hobby[30];
}details;
typedef struct member
{
    char name[20];
    int age;
    char addr[100];
    char active,married;
    details det;

}member;
void input(member c[2])
{
    for(int i=0;i<2;i++)
    {
        scanf(" %s",c[i].name);
        scanf("%d",&c[i].age);
        scanf(" %[^\n]",c[i].addr);
        scanf(" %c",&c[i].active);
        scanf(" %c",&c[i].married);
        if(c[i].married=='Y')
        {
            scanf(" %s",c[i].det.fam.wife_name);
            scanf("%d",&c[i].det.fam.n_child);
            for(int i=0;i<c[i].det.fam.n_child;i++)
            {
                scanf(" %s",c[i].det.fam.child_names[i]);
            }
        }
        else
        {
            scanf(" %[^\n]",c[i].det.hobby);
        }
    }
}
int main()
{
    member c[2];
    input(c);
    printf("The list of married active players and their wives is as follows:\n");
    for(int i=0;i<2;i++)
    {
        if(c[i].active=='Y' && c[i].married=='Y')
            printf("%s\t%s",c[i].name,c[i].det.fam.wife_name);
    }
    return 0;
}
