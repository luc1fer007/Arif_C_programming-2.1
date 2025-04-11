#include<stdio.h>
#include<string.h>

int main(){

    char string1[] = "Hello";
    char string2[]= "World";

    // strlwr (string1);               // converts lower case
    // strupr (string1);               // converts string to upper case
    // strcat(string1, string2);      // appneds string2 to end of string 1;
    // strncat(string1, string2, 1);   // appends n characters from string 2 to string 1
    // strcpy(string1, string2);       // copy string 2 to string 1
    // strncpy(string1, string2, 4);  // copy n characters of string2 to string 1

    // strset(string1, '?');         /// sets all character of  a string to a given character
    // strnset(string1, 'k', 1);   // sets first n characters of a string to a given character 
    // strrev(string1);           // reverse a string


    int result = strlen(string1);             //returns length string as int
    // int result = strcmp(string1,string2);       // string compare all characters
    // int result = strncmp(string1, string2,1);   // string compare to n characters
    //int result = strcmpi(string1, string2 );     // string compare all (ignore case)
    //int result = strnicmp(string1, string1, 1);  // string compare n characters (ignore cases)



    printf("%d", result);


    if (result == 0){
        printf("The result are the same");
    }
    else{
        ("The result are not the same");
    }


}

