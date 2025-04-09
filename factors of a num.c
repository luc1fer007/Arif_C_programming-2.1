#include<stdio.h>

void main()
{
    int n,i=1;
    printf("Enter n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        // printf("Enter n: ");
        // scanf("%d",&n);
        if(n%i==0)
        {
            printf("%d\n",i);
                          
        }i++;  ///must be completed otherwise infinite loop..
    }
}