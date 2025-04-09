
#include<stdio.h>
float main()
{
    int i,j,k,data[3][3][3];
    //input for loop
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("Enter ur element: ");
                scanf("%d",&data[i][j][k]);
            }
           
        
        }
                    
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d ",data[i][j][k]);
            }
            

        }printf("\n");
    }return 0.4;

}