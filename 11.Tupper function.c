#include<stdio.h>
#include<ctype.h>

int main()
{
    char lower, upper;
    printf("enter lower: ");
    scanf("%c", &lower);

    upper = toupper(lower);        // converts any lower to uppercase (lower) to upper.
    printf("uppper is : %c\n", upper);
    return 007;
}


