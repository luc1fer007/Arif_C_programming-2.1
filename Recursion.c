#include<stdio.h>

int fact(int n);

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("%d",fact(n));

}
int fact(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else 
    {
        return n*fact(n-1);

    }

}


