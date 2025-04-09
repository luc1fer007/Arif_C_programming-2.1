
#include<stdio.h>
float main()
{
    int i,j,data[3][3],data2[3][3],sum[3][3],mult[3][3];
    //input for loop
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter ur element: ");
            scanf("%d",&data[i][j]);
        
        }
                    
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",data[i][j]);

        }printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter ur element: ");
            scanf("%d",&data2[i][j]);
        
        }
                    
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",data2[i][j]);

        }printf("\n");
    }
    printf("sum is: %d\n",data[i][j]+data2[i][j]);
    
    printf("mult is: %d",data[i][j]*data2[i][j]);
    return 0.5;


}