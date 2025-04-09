// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("Test.txt","r");     //(file name,read or write)
    
//     char ch;
//     int c;
//     fscanf(fptr,"%c",&ch);
//     printf("character = %c\n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("character = %c\n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("character = %c\n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("character = %c\n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("character = %c\n",ch);
//     fclose (fptr);
   
//     return 0;
// }

//writing in file
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("Test.txt","w");     //(file name,read or write)
    
//     fprintf(fptr,"%c",'M');
//     fprintf(fptr,"%c",'A');
//     fprintf(fptr,"%c",'N');
//     fprintf(fptr,"%c",'G');
//     fprintf(fptr,"%c",'O');
//     fprintf(fptr,"%c",'O');
//     fclose(fptr);
    
   
//     return 0;
// }

//read or write

#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt","w");     //(file name,read or write)
    

    //USES of fgetc
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));

    //uses of fputc
    fputc('M',fptr);
    fputc('a',fptr);
    fputc('n',fptr);
    fputc('g',fptr);
    fputc('o',fptr);
    
    
    // fprintf(fptr,"%c",'M');
    // fprintf(fptr,"%c",'A');
    // fprintf(fptr,"%c",'N');
    // fprintf(fptr,"%c",'G');
    // fprintf(fptr,"%c",'O');
    // fprintf(fptr,"%c",'O');
    // fclose(fptr);
    
   
    return 0;
}

