#include<stdio.h>
#include<string.h>

void display(char st[])
{
    int i=0;
    while(st[i]!='\0')
    {
        
        printf("%c",st[i]);
        i++;
    }

}




int main()
{
    char str[]= "luc1fer007";

    display(str);
}