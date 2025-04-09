#include<stdio.h>
void main()
{
    int n,i=1,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);

    while(i<n)                //not equal to n otherwise it will equal to n;
    {
        if(n%i==0)
        {
            printf("%d+",i);
            sum = sum+i;
            
            
        }i++; 
        
    }
    printf("=%d",sum);                      //must be given otherwise infinite loop
    if(sum==n)
    {
        printf("\nPerfect");
    }
    else{
        printf("Not perfect");
    }
    
}