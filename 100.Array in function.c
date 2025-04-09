#include<stdio.h>

// void display(int x[])
// {
//     for(int i=0;i<5;i++)
//     {
//         printf("%d ",x[i]);
//     }
// }
// int main()
// {
//     int num[]={10,20,30,40,50};
//     display(num);
// }




//user input//

void  display(int x[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }printf("\n");

}



int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d",&n);
    int num[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        
    
    }
    display(num,n);
    return 0;







}