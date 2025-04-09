#include<stdio.h>
int main()
{
    int i;
    float j;
    double d;
    char c;

    printf("%u\n", sizeof(int));        //%u means unsigned value
    printf("%u\n", sizeof(float));     // size of always in int value so (%d) is used
    printf("%u\n", sizeof(double));    // u can also use %d as well
    printf("%u\n", sizeof(char));



    return 007;
}