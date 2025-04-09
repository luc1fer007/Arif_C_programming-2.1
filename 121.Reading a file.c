///Read a file fgetc() using
#include<stdio.h>
// #include<string.h>

int main()
{
    FILE *file;
    char name;
    int age;

    file = fopen("test.txt","r");
    
    if(file==NULL)
    {
        printf("File does not exist");
    }
    else{
        printf("The file is opened\n");

        while(!feof(file))                   // !feof(file) means "file end of  (feof)" from start till end...
        {
            name =fgetc(file);        //fgetc will enter character one by one...
            printf("%c\t",name);
        }
        fclose(file);
    }return 0;
}