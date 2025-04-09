#include<stdio.h>

float area(float a, float b);       //tells the compiler


int main()
{
    float a,b;
    printf("Enter a,b: ");
    scanf("%f %f",&a,&b);

    float _area= area(a,b);               // always calls from main function
    printf("The area is : %0.2f\n",_area);

    return 0;
}


float area(float a, float b)    // function definition
{
    return(0.5*a*b);
}
