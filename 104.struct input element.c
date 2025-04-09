#include<stdio.h>
#include<string.h>

struct person
{
    char name[30];          //must input the size of the [size]//

    int age;
    float salary;
    /* data */
};


int main()
{
    struct  person person1,person2;
    printf("Enter person1 name: ");
    scanf("%s",person1.name);

    printf("Enter age: ");
    scanf("%d",&person1.age);

    printf("Enter ur salary: ");
    scanf("%f",&person1.salary);


    printf("Person 1 name is: %s\n",person1.name);
    printf("Person 1 age is : %d\n",person1.age);
    printf("Person 1 salary is : %f\n",person1.salary);



    printf("Enter person2 name: ");
    scanf("%s",person2.name);

    printf("Enter age: ");
    scanf("%d",&person2.age);

    printf("Enter ur salary: ");
    scanf("%f",&person2.salary);


    printf("Person 1 name is: %s\n",person2.name);
    printf("Person 1 age is : %d\n",person2.age);
    printf("Person 1 salary is : %f\n",person2.salary);


    return 0;
    






}

