#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int row ,col;
    scanf("%d %d",&row,&col);
    int arr[row][col],arr1[row][col],sum[row][col],sub[row][col];
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            printf("Arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            printf("Arr1[%d][%d] = ",i,j);
            scanf("%d",&arr1[i][j]);
        }
        
    }
        for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            printf("Arr[%d][%d] = ",i,j);
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    printf("\n");
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            printf("Arr1[%d][%d] = ",i,j);
            printf("%d ",arr1[i][j]);
        }printf("\n");
    }
    printf("\n");
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            sum[i][j] = arr[i][j] + arr1[i][j];
        }
    }
        for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            sub[i][j] = arr[i][j] - arr1[i][j];
        }
    }
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            printf("%d ",abs(sub[i][j]));
        }printf("\n");
    }
    
}
