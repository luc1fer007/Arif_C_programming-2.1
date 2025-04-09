#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file;
    char name[50];
    int age;

    file = fopen("test.txt","a");

    if (file==NULL)
    {
        printf("File doesn't exist");
    }
    else{
        printf("file is opened\n");
        printf("Enter ur name and ");
        printf("Enter ur age: ");
        scanf("%s %d",&name,&age);

        fprintf(file,"%s %d\n",name,age);
       
        printf("File is written success!!");

    }return 0;
}