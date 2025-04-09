#include<stdio.h>

int main(){

    int num1,num2,large;

    printf("Enter num: ");
    scanf("%d %d", &num1, &num2);

    large = (num1>num2) ? num1:num2;  //just use for one line code//
    printf("%d\n", large);

    return 0;
}