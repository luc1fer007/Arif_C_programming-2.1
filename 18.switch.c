// switch keyword: switch , case , break, default
// write a programme that read a digit and display its spelling;

#include<stdio.h>

int main()
{
int digit;

printf("Enter a digit: ");

scanf("%d",&digit);


switch(digit){
    case 0:
    printf("zero\n");
    break;

    case 1:
    printf("one\n");
    break;

    case 2:
    printf("Two");
    break;

    default:
    printf("Error!!");

    
    
}
return 007;
}
