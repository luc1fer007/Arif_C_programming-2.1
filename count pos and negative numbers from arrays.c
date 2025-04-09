#include<stdio.h>
void main()
{
    int num[10],pos=0,neg=0;
    
    for(int i=0;i<10;i++)
    {
        printf("Enter elements: ");
       
        scanf("%d",&num[i]);
        
    }
    for(int i=0;i<10;i++)
    {
        if(num[i]>0)
        {
            pos=pos+1;
        }
        else{
            neg=neg+1;
        }
    }printf("%d %d",pos,neg);
    
}