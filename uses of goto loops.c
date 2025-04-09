#include<stdio.h>

void main()
{
    int n,i=1;
    printf("Enter n: ");
    scanf("%d",&n);
    odd:              //label 
    if (i%2!=0)
    {
        printf("%d\t",i);
        
    }i++;
    
    if(i<=n)
    {
        goto odd;
    }
}