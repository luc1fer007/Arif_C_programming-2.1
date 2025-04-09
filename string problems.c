//print the full name of user//

#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    printf("Enter ur name: ");
    // gets(name);                     //outdated and old and dangerous

    fgets(name,100,stdin);             // stdin means standard input//


   

    // printf("%s",name);
    puts(name);

    return 0;

}