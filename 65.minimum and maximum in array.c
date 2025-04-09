// #include<stdio.h>

// int main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     int num[n];

//     // for(int i = 0;i<n;i++)          // i<n for absolute value not use i<=n;
//     // { 
//     //     scanf("%d", &num[i]);        // for array input...

//     // }
//     int max = num[0];

//     for(int i=1;i<=n;i++)
//     {
//         scanf("%d",&num[i]);
//         if(max<num[i])
//         {
//             max= num[i];
//         }

//     }printf("Max is : %d\n",max);
//     return 0;
    

// }



//For minimum//
#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int num[n];

    // for(int i = 0;i<n;i++)          // i<n for absolute value not use i<=n;
    // { 
    //     scanf("%d", &num[i]);        // for array input...

    // }
    int min = num[0];
    scanf("%d",&num[0]);

    for(int i=1; i<n ;i++)
    {
        scanf("%d",&num[i]);
        if(min>num[i])
        {
            min = num[i];
        }

    }printf("min is : %d\n",min);
    return 0;
    

}