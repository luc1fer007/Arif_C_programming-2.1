#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


struct complex
{
    int real;
    int img;
};

int main()
{
    struct complex number1={5,8};
    struct complex *ptr = &number1;

    printf("real part = %d\n",ptr->real);
    printf("img part: %d\n",ptr->img);

}

