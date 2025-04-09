#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    int roll;
    int age;
    float cgpa;
    char name[100];
    double salary;
};

int main()
{
    struct student s1;
    strcpy(s1.name,"Arif");
    s1.age = 20;
    s1.salary = 1548125548;
    s1.cgpa = 4.0;

    printf("%0.2lf\n",s1.salary);
    printf("%d\n",s1.age);
    printf("%s\n",s1.name);
    printf("%0.2f\n",s1.cgpa);
}