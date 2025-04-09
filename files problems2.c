// #include<stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("Test.txt","r");
//     char ch;
//     ch = fgetc(fptr);
//     while(ch!=EOF)
//     {
//         printf("%c",ch);
//         ch = fgetc(fptr);
//     }
//     printf("\n");

//     fclose(fptr);
//     return 0;
// }



//make a file and read the 5 integers


#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt","r");
    int n;
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);
    fscanf(fptr,"%d",&n);
    printf("%d\n",n);

    fclose(fptr);
    return 0;
}


