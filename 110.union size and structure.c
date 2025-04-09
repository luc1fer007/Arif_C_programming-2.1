///like struct, union is a user defined data type,In union,all members share the same memory location.

//union declaration//

#include<stdio.h>
#include<string.h>

union test1
{ 
    int x,y;           
};

union test2
{
    char ch;
    int x;
};

union test3
{
    char name[20];
    double d;
};


//size of structure//


struct test4
{
    // char x;
    float Z;
    int y;
    double t;
};




int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;
    

    printf("size of(test1) = %d\n",sizeof(t1));
    printf("size of(test2) = %d\n",sizeof(t2));
    printf("size of(test3) = %d\n",sizeof(t3));
    printf("size of(test4) = %d\n",sizeof(t4));

    



    return 0;
}