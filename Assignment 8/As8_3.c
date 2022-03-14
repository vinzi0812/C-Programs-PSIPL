#include<stdio.h>
typdef struct dob
{
    int year;
    int month;
    int day;
}dob;
typedef struct employee
{
    char name[20];
    char gender;
    int salary;
    dob birth;
}employee;
int main()
{
    employee c[10];
    for(int i=0;i<10;i++)
    {
        scanf(" %s",c[i].name);
        scanf(" %c",c[i].gender);
        scanf("%d",&c[i].salary);
        scanf
    }
}