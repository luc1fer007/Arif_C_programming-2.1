#include<stdio.h>
void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int i=2,change = 0;    //i cannot be one its not a prime number
    if(n==1)
    {
        printf("its a special num\n");
        change=1;
        
       
    }

    while(i<=n/2)
    {
        if(n%i==0)
        {
            change=1;
            break;
        }
        i++;
    }
    if(change==0)
    {
        printf("prime!!");
    }
    else{
        printf("not prime!!");
    }
}