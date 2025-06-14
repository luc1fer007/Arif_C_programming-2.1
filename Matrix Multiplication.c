#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int row ,col,sum = 0,k;
    int row2,col2;
    scanf("%d %d",&row,&col);
    scanf("%d %d",&row2,&col2);
    int arr[row][col],arr1[row2][col2],mult[10][10];//mult is the result matrix //
    if(col != row2) printf("Error!!");   //in matrix mult 1st matrix col should be equal to 2nd matrix row//
    else
    {
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            printf("Arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i = 0 ; i < row2 ; i++)
    {
        for(int j = 0 ; j < col2 ; j++)
        {
            printf("Arr1[%d][%d] = ",i,j);
            scanf("%d",&arr1[i][j]);
        }
        
    }
    printf("\n");
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col ; j++)
        {
            printf("Arr[%d][%d] = ",i,j);
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    printf("\n");
    for(int i = 0 ; i < row2 ; i++)
    {
        for(int j = 0 ; j < col2 ; j++)
        {
            printf("Arr1[%d][%d] = ",i,j);
            printf("%d ",arr1[i][j]);
        }printf("\n");
    }
    printf("\n"); 
    for(int i = 0 ; i < row ; i++ )  //in the resultant matrix the row == 1st matrix row and the col == 2nd matrix col//
    {
        for(int j = 0 ; j < col2 ; j++)
        {
            for(k = 0 ; k < col ; k++ )// k should be less then < 1st matrix column// 
            {
                sum = sum + arr[i][k] * arr1[k][j];
            }
            mult[i][j] = sum; //now the sum will be copid to mult[i][j]//
            sum = 0 ; //have to be zero otherwise it will add the previous value//
        }
    }

    //printing the mult[row][col] in matrix form//
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < col2 ; j++)
        {
            printf("%d ",mult[i][j]);
        }
        printf("\n");

    }
    printf("\n");

    }
}
