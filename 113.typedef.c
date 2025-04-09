//typedef: it helps to rename data type

// #include<stdio.h>

// int main()
// {
//     typedef char LETTER;        //changes the "char " to "LETTER"..
//     LETTER ch;
//     ch = 'a';
//     printf("%c",ch);
//     return 0;
// }


#include<stdio.h>
#include<string.h>

struct book
{
    char name[20];
    float price;
    /* data */
};

int main()
{
    typedef struct  book BOOK;
    BOOK b = {"lucifer",007};
    printf("%s\n",b.name);
    printf("%f\n",b.price);

    return 0;
    
}




