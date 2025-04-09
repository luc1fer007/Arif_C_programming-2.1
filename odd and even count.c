#include<stdio.h>
void main()
{
    int n,num[100],i,odd=0,even =0;
    

    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)     //loop to print n numbers of elements
    {
        printf("Enter elements");
        scanf("%d",&num[i]);
        if(i%2==0)
        {
            even = even +1;
        }
        else{
            odd = odd +1;
        }
        
        

    }printf("%d %d",odd, even );
 
}