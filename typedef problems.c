#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//user defined

typedef struct student
{
    int roll;
    float cgpa;
    char name[100];

}stu;


typedef struct computerengineeringstudent
{
    int roll;
    float cgpa;
    
    char name[100];
}coe;


int main()
{
    coe s1;
    s1.roll = 154;
    s1.cgpa = 3.9;
    strcpy(s1.name,"james Bond");
    printf("%d\t",s1.roll);
    printf("%0.2f\t",s1.cgpa);
    printf("%s\t",s1.name);

    
}