#include<stdio.h>
int  fib(int n);

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("%d",fib(n));


}
int fib(int n)
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
        int result = fib(n-1)+fib(n-2);
        return result;
    }
}


