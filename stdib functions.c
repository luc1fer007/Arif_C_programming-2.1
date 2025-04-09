#include<stdio.h>
#include<string.h>

#include<stdlib.h>       //for string functions

void main()
{
    char name[100];
    char name1[20];
    printf("Enter ur name: ");
    fgets(name,100,stdin);
    printf("Enter ur name1: ");
    // fgets(name,100,stdin);
    fgets(name1,100,stdin);
    // puts(name);

    printf("%d\n",strlen(name));   //to know the length..
    printf("%d\n",sizeof(name));   //to know the size..
    
    strcat(name,name1); // %s to concatenate the strings...
    puts(name);
    
    printf("%s",strcpy(name,name1));   //cpy the name1 to name

    printf("%s",strncpy(name,name1,5));  //copy the first 5 characters...


}