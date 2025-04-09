// #include<stdio.h>
// int main(){
//     int i = 1;
//     while(i<=10){
//         printf("saranghae Dana\n");
//         i++;
//     }
//     return 0;
// }


#include<stdio.h>
#include<string.h>

int main(){

    char name[25];
    printf("\nWhat's Your Name?: ");
    fgets(name, 25, stdin);
    name[strlen(name)-1]= "\0";

    while (strlen(name) == 0){
        printf("\nYou did not enter your name");

        printf("\nWhat's Your Name?: ");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = "\0";

    }
    printf("Hello %s",name);
    return 0;
}