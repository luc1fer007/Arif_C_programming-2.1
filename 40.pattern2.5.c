#include<stdio.h>

int main()
{
    int n,row, col;
    printf("Enter n: ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",col%2);          //for same binary  value in every column

        }printf("\n");
        
    }
    return 007;


}