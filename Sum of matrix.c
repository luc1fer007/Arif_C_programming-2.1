#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,row, col;
    scanf("%d %d",&row,&col);
    int a[row][col],b[row][col];
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }printf("\n");
        for(int k = 0 ; k < row ; k++)
    {
        for(int l = 0 ; l < col ; l++)
        {
            printf("b[%d][%d] = ",k,l);
            scanf("%d",&b[k][l]);
        }
    }
    printf("\n");
    printf("A = ");
    for(int i = 0 ; i < row ; i++)
    {
        printf("\t");
        for(int j = 0 ; j < col ; j++)
        {
            // printf("a[%d][%d] = ",i,j);
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("B = ");
    for(int k = 0 ; k < row ; k++)
    {
        printf("\t");
        for(int l = 0 ; l < col ; l++)
        {
            // printf("b[%d][%d] = ",k,l);
            printf("%d ",b[k][l]);
        }
        printf("\n");
    }
    return 0;
}
