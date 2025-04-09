#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void fun(int *x, int *y);

void main()
{
    int A,B;
    A = 10;
    B = 20;

    printf("%d %d\n",A,B);

    fun(&A,&B);
    printf("%d %d",&A,&B);

}
void fun(int *x,int *y)
{
    *x = 11;
    *y = 12;
}