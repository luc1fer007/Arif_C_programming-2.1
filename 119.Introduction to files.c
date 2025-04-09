//To write something in file
/*

fputc();

fputw()

fputs()

fprintf()

fwrite()



*/


/*
To read something in a file

fgetc()

fgetw()

fgets()

fscanf()

fread()





*/

/*
"a" means append
"w" means write
"r" means read

*/







#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file;
    char name[40]="lucifer007";
    int strlength = strlen(name);

    file = fopen("text.txt","W");   //("file name","write")

    if(file==NULL)
    {
        printf("no");
    }
    else{
        printf("file is opened\n");

        for(int i=0;i<strlength;i++)
        {
            fputc(name[i],file);

        }
        printf("File is written succes!!");


        fclose(file);
    }







    return 0;
}