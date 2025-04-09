#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    int num[n];

    // for(int i =0;i<=n;i++)
    // {
    //     scanf("%d",&num[i]);
        
    // }
    
    for(int i =0;i<n;i++)       //always <n ..

    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    printf("%d\n",sum);
    return 007;
}