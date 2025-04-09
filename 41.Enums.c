#include<stdio.h>

enum Day{sun = 1 , mon = 2, tue = 3, sat = 7};

int main(){

    //enum = a user defined type of named integer identifiers
    // helps to make programmne more readable

    enum Day today = sun;
    // printf("%d", today);   ////enums are not strings , but they can be treated as int 
    

    if (today == sun || today == sat)
    {
        printf("\nIts the weekend! party time!");
    }
    return 0;

    
}