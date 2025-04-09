#include<stdio.h>
#include<string.h>
int main()
{
    char name1[]="Arif";
    char name2[]="Hassan";

    // strlwr(name1);             //converts a string to lower case
    // strupr(name2);             // convert a string to upper case

    // strcat(name1,name2);       // name2 will be add after name1
    // strncat(name1,name2,2);     // n character will be add after name1

    // strcpy(name1,name2);       //copy name2 to name1
    // strncpy(name1,name2,2);    // copy n character of name2 to name1

    // strset(name1,'?');            //sets all the characters of a string to a given character
    // strnset(name1,'x',1);         //sets first n characters of a string to a given character
    // strrev(name1);                //reverse a string


    // int lentgh= strlen(name1);         //string length in intezers

    // int result = strcmp(name1,name2); /// string compare all characters if same print 0; else other number
    // if(result==0)
    // {
    //     printf("They are the same");

    // }
    // else{
    //     printf("They are not the same");
    // }

    
    int result = strncmp(name1,name2,5); /// compare n type  character
    // int result = strcmpi(name1,name2);      //compare all ignore case
    // int result = strnicmp(name1,name2,4);      // compare n type character ignore case
 



    // printf("%s",name1);
    printf("%d",result);
    return 007;
 


}