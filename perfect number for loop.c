#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);

    for (int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            
            printf("%d+",i);
            sum = sum+i;
            
        }
        
       
    }
    printf("=%d\n",sum);
    if(sum==n)
    {
        printf("%d is perfect",n);

    }
    else
    {
        printf("%d is not perfect",n);
    }
}