#include<stdio.h>
#include<string.h>

//1st declare structure
struct student
{
    int age;
    int roll;
    float cgpa;
    /* data */
};

void printinfo(struct student s1);

int main()
{
    struct student s1 = {15,458,3.8};

    printinfo(s1);


    return 0;
}

void printinfo(struct student s1)
{
    printf("%d\n",s1.age);
    printf("%0.2f\n",s1.cgpa);
    printf("%d\n",s1.roll);
}
