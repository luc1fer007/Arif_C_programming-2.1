#include<stdio.h>
int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d", &num);

    int  num[0]=num[-1];
    printf("%d",num);
}