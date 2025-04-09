#include<stdio.h>
#include<string.h>

#include<stdlib.h>

int main()
{
    int ptr ,mat;
    for(int i = 0;i<5;i++)
    {
        ptr[i]=&mat[i][0];

    }printf("%d ",*ptr);
}