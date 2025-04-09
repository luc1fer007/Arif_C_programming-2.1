#include<stdio.h>
void main()
{
    int n,num[100],i,sum,num1[100];
    

    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)     //loop to print n numbers of elements
    {
        printf("Enter elements: ");
        scanf("%d",&num[i]);
        

    }sum = num[1]+num[n-2];
   
    printf("%d",sum);
}