#include<stdio.h>
#include<string.h>


int main(){

    char cars[][10] = {"mustang", "BMW", "mercedes", "volkswagan", "ferrari"};

    strcpy(cars[0],"Tesla");

    for (int i = 0; i<sizeof(cars)/sizeof(cars[0]);i++){

        printf("%s\n",cars[i]);
    }
    return 0;

}