///like struct, union is a user defined data type,In union,all members share the same memory location.

//union declaration//

#include<stdio.h>

union test
{
    int x,y;             //x,y share the same memory location so their values are same//
};




int main()
{
    union test test1;
    test1.x=10;
    printf("%d\n",test1.x);
    printf("%d\n",test1.y);



    return 0;
}