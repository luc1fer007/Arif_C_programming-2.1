//linear search is for short list
#include<stdio.h>     
int main()
{
    int num[]={1,10,20,36,41,15,89,51};
    int value,pos=-1;

    printf("Enter the value for searching: ");

    scanf("%d",&value);

    for (int i =0;i<9;i++)
    {
        if (value == num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Item is not found");
    }
    else{
        printf("The item is  found is %d position",pos);
    }
    return 007;

    
}