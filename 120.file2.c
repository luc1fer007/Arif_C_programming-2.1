#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file;
    char name[50];
    file = fopen("test.txt","a");

    if (file==NULL)
    {
        printf("File doesn't exist");
    }
    else{
        printf("file is opened\n");
        printf("enter ur University name: ");
        gets(name);

        fputs(name,file);            //use to put name in the file
        fputs("\n",file);
        printf("File is written success!!");

    }return 0;
}