#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct students
{
    int age;
    int roll;
    float cgpa;
    int ptr;
};

int main()
{
    struct students s1 = {16,254,3.8};
    printf("%d\t",s1.roll);
     

    struct students *ptr = &s1;
    printf("%d\n",(*ptr).roll);
    

    //Arrow operator//
    printf("%d\t",ptr->age);
    printf("%0.2f\t",ptr->cgpa);
    printf("%d\t",ptr->roll);
}

