#include<stdio.h>
void main()
{
    int n,num[100],i,sum=0;
    float avg;

    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)     //loop to print n numbers of elements
    {
        printf("Enter elements");
        scanf("%d",&num[i]);
        

    }
    for(i=0;i<n;i++)
    {
        
        sum = sum+num[i];
        
        

    }printf("%d\n",sum);
    printf("avg is : %0.2f",(float)sum/n);
}