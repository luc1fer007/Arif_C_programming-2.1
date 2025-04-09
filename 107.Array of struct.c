#include<stdio.h>
#include<string.h>

struct person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct person person[3];           //person[number] how many person..
    for(int i=0;i<3;i++)
    {
        printf("Enter information of person 1: %d\n",i+1);
        printf("Enter name: ");
        fflush(stdin);
        gets(person[i].name);

        printf("Enter age: ");
        scanf("%d",&person[i].age) ;  ///person[0] 0 index...

        printf("Enter salay: ");
        scanf("%f",&person[i].salary);

    }
    for(int i=0;i<3;i++)
    {
        printf("\n\nInformation for person %d\n",i+1);
        printf("Name: %s\n",person[i].name);
        printf("Age: %d\n",person[i].age);
        printf("salary: %d\n",person[i].salary);
    }
    return 0;
    
    
}