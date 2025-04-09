#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printstring(char name[]);
void countstirng(char name[]);

void main()
{
    char name[]="HHA";
    char name2[] = "HHHB";

    int cmp = strcmp(name2,name);     // ASCII VALUE ( NAME - NAME2)
    int cmp2 = strcmp(name,name2);
    printf("%d %d ",cmp,cmp2);
}
