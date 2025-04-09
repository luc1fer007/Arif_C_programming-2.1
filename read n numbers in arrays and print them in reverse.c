#include<stdio.h>
void main()
{
    int n,num[100],i;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)     //loop to print n numbers of elements
    {
        printf("Enter elements");
        scanf("%d",&num[i]);
        

    }
    for(i=n-1;i>=0;i--)  //negative loop to reverse the order
    {
        printf("%d ",num[i]);
    }
    
}