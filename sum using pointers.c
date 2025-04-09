#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int  sum(int,int);
int (*ptr)(int ,int);
    


int  main()
{
    int a =20;
    int b =10;
    

    ptr = &sum;
    int s = (*ptr)(a,b);
    printf("%d",s);

    return 0;
}

int  sum(int x , int y)
{
    return x+y;

}


