#include<stdio.h>

int main()
{
    //local struct inside int main function...
    struct person
{
    int age;              //member of struct
    float salary;
    /* data */
};
struct person person1,person2;          //local variable//
person1.age=25;
person2.salary= 25000.575;

printf("Age = %d\n",person1.age);
printf("Salary = %0.2f\n",person1.salary);

person2.age=27;
person2.salary=27000.775;

printf("Person2: \n");
printf("Age = %d\n",person2.age);
printf("Salary = %0.2f\n",person2.salary);


return 0;





}