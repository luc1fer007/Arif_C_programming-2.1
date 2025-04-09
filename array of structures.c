#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];   //print the charactur number in [number] otherwise print will be 1;
    

};

int main()
{
    struct student ece[100];
    ece[0].roll =  12;
    ece[0].cgpa = 3.8;
    strcpy(ece[0].name, "Arif");

    printf("name = %s\n",ece[0].name);
    
    
}