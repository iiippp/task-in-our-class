#include<stdio.h>
typedef struct{
    char name[50];
    char familyname[50];
    int age;

}person;
typedef struct{
    person pe;
    char speciality[50];
}student;
int main()
{
    student p;
    printf("please enter student name:\n");
    gets(p.pe.name);
    printf("\n");
    printf("family name:\n");
    gets(p.pe.familyname);
    printf("\n");
    printf("give me your age");
    scanf("%d",&p.pe.age);
    return 0;
}
