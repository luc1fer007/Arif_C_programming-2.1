
#include<stdio.h>
float main()
{
    int i,j,data[3][3];
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
    }return 0.4;

}