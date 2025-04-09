#include<stdio.h>

void main()
{
    int n;
    printf(": ");
    scanf("%d",&n);

    do
    {
        printf("%d",n%10);
        n= n/10;
        /* code */
    } while (n!=0);
    
}