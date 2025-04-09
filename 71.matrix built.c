#include<stdio.h>
int main()
{
    int i,j;
    int A[3][4],B[3][4];

    //scanning A matrix
    printf("Enter elments for A matrix.\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //printing A matrix
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");


    }
    //scanning B matrix
    printf("Enter elements for B matrix");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    //printing B matrix
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");


    }
    
    return 0;

}