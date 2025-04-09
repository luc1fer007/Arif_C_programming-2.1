#include<stdio.h>
#include<string.h>

void printstring(char first_name[]);

int main()
{
    char first_name[]="lucifer";
    char last_name[]="coder";
    printstring(first_name);
    printstring(last_name);

    return 0;

    

}

void printstring(char first_name[])
{
    for(int i =0;first_name[i]!='\0';i++)            //Null ("\0" or 0) to stop the iteration
    {
        printf("%c",first_name[i]);
    }
    printf("\n");
}