// #include<stdio.h>
// int main(){

//     char name[50];

//     printf("Enter ur name: ");
//     gets(name);                  // gets warning but usable//


//     fgets(name, sizeof(name), stdin);    //fgets needs more parameter//
    


//     printf("Hello! %s\n",name);
//     puts(name);                      // only print the ( inner value)
//     return 007;
// }


// get function operation

#include<stdio.h>

int main(){

    char character;
    printf("Enter character: ");
    // scanf("%c",&character);

    character = getchar();           // use of get character//

    
    // printf("%c\n", character);

    printf("You entered: ");
    putchar(character);             // use of put character//

    return 0;


}