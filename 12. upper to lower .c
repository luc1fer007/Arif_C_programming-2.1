#include<stdio.h>
#include<ctype.h>

int main()
{
    char upper,lower;
    printf("enter upper: ");
    scanf("%c", &upper);

    lower = tolower(upper);        // converts any lower to uppercase (lower) to upper.
    printf("uppper is : %c", lower);
    return 007;
}