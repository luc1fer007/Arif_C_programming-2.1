
#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,data[2][4], data2[3][4],sum[i][j];
    //input for loop
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter ur element:  ");
            scanf("%d",&data[i][j]);
           
        
        }
                    
    }
    // for loop to print the matrix
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",data[i][j]);

        }printf("\n");
    }
    //for loop for data 2 scanf
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter ur element:  ");
            scanf("%d",&data2[i][j]);
           
        
        }
                    
    }
    //for loops for data2 print 
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",data2[i][j]);

        }printf("\n");
    }

    


}