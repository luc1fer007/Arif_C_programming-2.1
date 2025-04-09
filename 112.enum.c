//An enum is a user defined data type that consists of integral constants.

//enum declaration

enum days_of_the_week
{
    Sun,Mon,Tue,Wed,Thu,Fri,Sat
};

#include<stdio.h>
int main()
{
    enum days_of_the_week day1,day2;

    day1= Sun;
    day2=Mon;

    printf("Days_of_the_week is : %d %d",day1,day2);

    
}