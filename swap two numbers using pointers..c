#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swapnum(int a,int b);

void  main()
{
    int a =20;
    int b = 10;
    int temp;
    printf("Before swaping==\n");

    printf("a= %d ,b =  %d\n",a,b);

    swapnum(20,10);





}

void swapnum(int a,int b)
{
    int temp;
    temp = a;
    a= b;
    b = temp;
    printf("After swaping==\n");

    printf("a = %d\n",a);
    printf("b = %d\n",b);


}