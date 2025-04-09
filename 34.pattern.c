#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",col+96);   //  col+96=97 to print the ASCII value of "a"
                                       // %c to print the character value
        }printf("\n");
    }return 007;
}