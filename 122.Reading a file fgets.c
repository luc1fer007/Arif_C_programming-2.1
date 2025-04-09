///Read a file fgets() using
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file;
    char fname[50],lname[50];
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
            fscanf(file,"%s%d%d",&fname,&lname,&age);        //fscanf(filepointer,format specifier,variableName)...
            
        }
        printf("%s%s%d ",fname,lname,age);   
        
        
        fclose(file);
    }return 0;
}