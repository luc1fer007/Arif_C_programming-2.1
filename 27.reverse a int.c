#include<stdio.h>
int main()
{
    int num;
    int rev_num;
    int digit;
    scanf("%d", &num);
    rev_num = 0;

    while(num)
    {  digit = num  % 10;
       rev_num = rev_num *10 + digit;
       num = num /10;
       
    
    }
    printf("%d",rev_num);
}
