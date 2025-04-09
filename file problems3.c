#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr = fopen ("Text.txt","W");

    char name[100];
    int age;
    float cgpa;

    printf("entter name: ");
    scanf("%s",&name);
    printf("Enter age:");
    scanf("%d",&age);

    printf("Enter cgpa: "); 
    scanf("%f",&cgpa);

    fprintf(fptr,"%s\n",name);
    fprintf(fptr,"%d\n",age);
    fprintf(fptr,"%0.5f",cgpa);
    fclose(fptr);

}