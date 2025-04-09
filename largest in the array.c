#include<stdio.h>
void main()
{
    int n,num[100],i,num2[100];
    

    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)     //loop to print n numbers of elements
    {
        printf("Enter elements: ");
        scanf("%d",&num[i]);
        
        

    }int max = num[0];
    for(i=0;i<n;i++)
    {
        if(max<num[i])
        {
            max = num[i];
        }
      
    }printf("%d",max);
    
}