
#include<stdio.h>
float main()
{
    int i,j,data[2][4];
    //input for loop
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter ur element:  ");
            scanf("%d",&data[i][j]);
        
        }
                    
    }
    //for loop to print the matrix
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",data[i][j]);

        }printf("\n");
    }
    return 0.4;

}