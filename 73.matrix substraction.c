#include<stdio.h>
int main()
{
    int i,j,rows,col;
    int A[3][4],B[3][4],c[3][4];

    printf("Enter the numbers of rows and col: ");
    scanf("%d %d",&rows,&col);

    //scanning A matrix
    printf("Enter elments for A matrix.\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    
    //scanning B matrix
    printf("Enter elements for B matrix");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }


    //printing A matrix
    printf("\nA = ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");


    }
    

    //printing B matrix
    printf("\nB = ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");


    }

    //adding the matrix

    
    //printing B matrix
    printf("\nC = \t");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            c[i][j] = A[i][j] * B[i][j];
            printf("%d ",c[i][j]);

            
        }
        printf("\n\t");
        


    }
    
    return 0;

}