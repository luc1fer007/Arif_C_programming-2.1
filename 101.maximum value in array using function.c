//find the maximum in array using function

#include<stdio.h>

int  maximum(int x[],int n)
{
    int i;
    int max = x[0];               //assume that...
    for( i =0;i<n;i++)            //i<n not i<=n...//
    {
        if (max < x[i])
        {
            max = x[i];

        }
        


    }
    
    return max;
}


int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d ",&n);
    int num[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        
    
    }
    int max_value=maximum(num,n);
    printf("%d\n",max_value);
    return 0;







}