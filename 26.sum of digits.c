#include<stdio.h>

int main()
{
    int num,sum=0;
    printf("Enter num: ");
    scanf("%d",&num);

    for(int i =1;i<sizeof(num);i++)
    {
        sum = sum+i;

    }printf("%d\n",sum);
}