#include<stdio.h>

int convert(int n);

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("%d ",convert(n));

}

int convert(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        int result = (n%2)+10*convert(n/2);
        return result;
    }
}

