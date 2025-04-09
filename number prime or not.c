#include<stdio.h>

int prime(int n);

int main()
{
    int n,result;
    printf("Enter n: ");
    scanf("%d",&n);
    result = prime(n);

    if(result == 0)
    {
        printf("%d is prime",n);
    }







    return 0;
}

int prime(int n)
{
    
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }

}