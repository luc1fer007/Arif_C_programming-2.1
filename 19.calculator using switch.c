#include<stdio.h>
#include<math.h>


int main()
{
    double num1, num2;
    char operator;

    printf("Enter ur number: ");
    scanf("%lf %lf" , &num1, &num2);

    printf("enter ur char: ");
    scanf("  %c", &operator);       /// space before %c to consume new line..//



    switch (operator)
    {
    case '+':{
        printf("%lf\n",num1+num2);
        break;

    }
       
    case '-':
    {
        printf("%lf",num1-num2);
        break;
    }
    case '*':
    {
        printf("%lf",num1*num2);
        break;
    }
    case '/':
    {
        if(num2==0){
            printf("Error!");
        }
        else
        {
            printf("%lf", num1/num2);
        break;
        }
    }


    
    
    default:
    {
        printf("Wrong value!!");
    }
        break;
    }
    return 0;
}