/*Print a string using functions and 
measure the length of it

*/

#include<stdio.h>
#include<string.h>

void printstring(char name[]);
int  measurelength(char name[]);

void main()
{
    char name[100];
    printf("Enter ur name: ");
    

    fgets(name,100,stdin);                //Takes the input(str,character numbers,standard input)

    // puts(name);                //Gives the output
    printstring(name);

    printf("%d",measurelength(name));


    
}

void printstring(char name[])
{
    for(int i=0;name[i] !='\0';i++)
    {
        printf("%c",name[i]);
    }printf("\n");
}

int measurelength(char name[])
{
    int count =0;
    for(int i =0;name[i]!='\0';i++)
    {
        count+=1;
    }return count-1;  /// cause index starts from 0;


}