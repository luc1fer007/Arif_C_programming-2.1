#include<stdio.h>
#include<string.h>

struct person
{
    char name[50];
    int age;
    float salary;
};

void display(struct person p)
{
    printf("Name: %s\n",p.name);
    printf("Age: %d\n",p.age);
    printf("salary: %f ",p.salary);
    printf("\n");

    // printf("Name: %s\n",q.name);
    // printf("Age: %d\n",q.age);
    // printf("salary: %f\n ",q.salary);



}


int main()
{
    struct person person1,person2;

    strcpy(person1.name, "lucifer");
    person1.age = 20;
    person1.salary=4515478;

    display(person1);             //multiple user multiple displays..//

    strcpy(person2.name,"Dana");
    person2.age=25;
    person2.salary= 89451412547;

    display(person2);             //multiple user multiple displays//

    return 0;
}