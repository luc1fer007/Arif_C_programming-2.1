#include<stdio.h>

int main()
{
    int a = 30;
    int b = 15;           // bitwise operations doesnot work on float
    int c = 47;

    c = a&b;           // multiplication of binary
    printf("%d\n",c);

    c = a|b;           // binary adding values
    printf("%d\n",c);

    c = a^b;
    printf("%d\n", c);   //Exor value

}