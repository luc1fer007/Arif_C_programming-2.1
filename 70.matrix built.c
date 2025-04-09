#include<stdio.h>
int main()
{
    int i,j;
    int A[3][4];

    //scanning A matrix
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
    }return 0;


}