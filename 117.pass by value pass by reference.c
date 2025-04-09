// #include<stdio.h>
// void modifyvalue(int num)
// {
//     num =20;

// }
// int main()                           //value by passs
// {
//     int num = 10;
//     printf("Before modification: %d\n",num);

//     modifyvalue(num);

//     printf("After modification: %d\n",num);

//     return 0;
// }



#include<stdio.h>
void modifyvalue(int *num)     //*(num) to receive the address
{
    *num =20;

}
int main()                           //value by reference..
{
    int num = 10;
    printf("Before modification: %d\n",num);

    modifyvalue(&num);        //for reference send &(address)

    printf("After modification: %d\n",num);

    return 0;
}

