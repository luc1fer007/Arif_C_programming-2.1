#include<stdio.h>
#include<string.h>

// int main(){

//     char x = 'X';
//     char y = 'Y';

//     char temp;

//     temp = x;
//     x = y;
//     y = temp;

//     printf("x = %c\n", x);
//     printf("Y = %c\n", y);

//     return 0;
    

// }


int main(){

    char x[15] = "lemonade";      /// []  is for the size of the char
    char y[15] = "soda";          /// both [] should be same size..

    char temp[15];

    strcpy(temp, x);
    strcpy(x,y);
    strcpy(y,temp);

    printf("x = %s\n", x);
    printf("Y = %s\n", y);       // %s for strings

    return 0;
    

}


