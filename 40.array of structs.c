#include<stdio.h>
#include<string.h>

struct student
{
    char name[12];
    float gpa;
    /* data */
};

int main()
{
    struct student student1={"sofia", 3.0};
    struct student student2={"patrick", 2.5};
    struct student student3={"sandy", 4.0};
    struct student student4={"squindral",3.0};

    struct student students[]={student1,student2,student3,student4};

    for(int i = 0;i<sizeof(students)/sizeof(students[0]);i++){
        printf("%-10s\t",students[i].name);
        printf("%0.2f\n",students[i].gpa);

    }
    return 0;

}
