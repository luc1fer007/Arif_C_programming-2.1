#include<stdio.h>

int main()
{
    double prices[] ={ 5.0,9.0,89.0,50.,2560.56,598.89};

    // printf("%dbytes\n",sizeof(prices));

    // printf("%f",prices[0]);

    for(int i = 0;i<sizeof(prices)/sizeof(prices[0]) ;i++){  // price[0] means the size of 1 element cause every element has the same size..                                                // arr[0] or arr same issue..

        printf("$%0.2f\n", prices[i]);
    }
    return 0;
}