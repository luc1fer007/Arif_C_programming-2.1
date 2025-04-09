// #include<stdio.h>
// int main()
// {
//     int n,row,col;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(row=1;row<=n;row++)
//     {
//         for (col=1;col<=row;col++)
//         {
//             printf("%c ",col+64);
//         }printf("\n");

//     }
    
//     for(row=n;row>=1;row--)
//     {
//         for (col=1;col<=row;col++)
//         {
//             printf("%c ",col+64);
//         }printf("\n");

//     }return 007;
    

// }
   

///its for small letter "a"
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for (col=1;col<=row;col++)
        {
            printf("%c ",col+96);
        }printf("\n");

    }
    
    for(row=n;row>=1;row--)
    {
        for (col=1;col<=row;col++)
        {
            printf("%c ",col+96);
        }printf("\n");

    }return 007;
    

}





