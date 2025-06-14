#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row1,col1,i,j,k,sum = 0,row2,col2;
    scanf("%d %d",&row1,&col1);
    scanf("%d %d",&row2,&col2);
    int arr1[row1][col1],arr2[row2][col2];
    int mult[row1][col2] ;//thats the matrix of output...//
    if(col1 != row2)
    {
        printf("Error!!");

    }
    else
    {
    for(i = 0 ; i < row1 ; i++)
    {
        for(j = 0 ; j < col1 ; j++)
        {
            printf("arr1[%d][%d] = ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n");
    for(i = 0 ; i < row2 ; i++)
    {
        for(j = 0 ; j < col2 ; j++)
        {
            printf("arr2[%d][%d] = ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Now the printing: \n");
    for(i = 0 ; i < row1 ; i++)
    {
        for(j = 0 ; j < col1 ; j++)
        {
            printf("arr1[%d][%d] = %d",i,j,arr1[i][j]);

        }printf("\n");
    }
    printf("\n");
    for(i = 0 ; i < row2 ; i++)
    {
        for(j = 0 ; j < col2 ; j++)
        {
            printf("arr2[%d][%d] = %d",i,j,arr1[i][j]);

        }printf("\n");
    }
    //Now for the multiplication part//
    for(i = 0 ;  i < row1 ; i++)
    {
        for(j = 0 ; j < col2 ; j++)
        {
            for(k = 0 ; k < col1 ; k++)
            {
                sum = sum + arr1[i][k] * arr2[k][j];
            }
            mult[i][j] = sum;
            sum = 0;
        }
    }
    printf("\n");
    //now for the mult printing part///
    printf("Multiplication is : \n");
    for(i = 0 ; i < row1 ; i++)
    {
        cout <<"\t\t\t";
        for(j = 0 ; j < col2 ; j++)
        {
            printf("%d ",mult[i][j]);
        }
        printf("\n");
    }
    }
    printf("\n");

}
