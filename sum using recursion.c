#include<stdio.h>
int  sum(int n);

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d",&n);

    printf("%d",sum(n));

    return 1;
    
    


}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else 
    {
        int sumn1 = sum(n-1);
        int sumN = sum(n-1)+n;
        return sumN;
    }

    

     
}