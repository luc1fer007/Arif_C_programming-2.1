#include<stdio.h>
#include<math.h>
float tempconverter(float c);

void main()
{
    float c;
    printf("Enter C: ");
    scanf("%f",&c);

    printf("%0.3f",tempconverter(c));



}

float tempconverter(float c)
{
    float fahrenheit = ((c/5)*9)+32;
    return fahrenheit;
}