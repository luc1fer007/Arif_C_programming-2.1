#include<stdio.h>
#include<string.h>

struct person
{
    char name[30];
    int age;
    float salary;
};


//direct initializing

int main()
{
    struct person person1 ={"Arif",20,2500000};      //local variable;
    struct person person2,person3;
    

    //element wise assingment.
    strcpy(person2.name,"Arif");      //strcpy element wise assingment//
    person2.age = 16;
    person2.salary = 25000000;

    person3=person2;

    //structure variable assingment.

    // printf("Person 1 name is : %s\n",person1.name);

    // printf("Person: \n");
    // printf("Age = %d\n",person2.age);
    // printf("Name is : %s\n",person2.name);

    // printf("Person 3 name is : %s\n",person3.name);
    if(person1.age==person2.age && person3.salary == person1.salary)
    {
        printf("same");
    }
    else
    {
        printf("They are not the same");
    }





    return 0;
    
    
}