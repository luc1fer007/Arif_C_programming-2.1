#include<stdio.h>

// int fact(int n)
// {
    
//     if(n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n*fact(n-1);    //returns it to the main function
//     }
// }


// int main()
// {
    
  

//     int _fact = fact(5);         /////function always calls from main function
//     printf("Factorial of %d is: %d\n",5,_fact);

//     return 007;      ///in main function return must..
// }


int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return n*(n-1);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int _fact = fact(n);
    printf("Fact is %d : %d\n",n,_fact);

    return 007;
}