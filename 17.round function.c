#include<stdio.h>
#include<math.h>


int main()
{
    double x = 5.65;           // if suppose x = 5.55 means after 0 value is >=5 then it will be 6.00;
    
    double y = 5.4;            // below means <=5 will be 5;;

    double result = round(x); 
    double _result = round(y);

    printf("%lf", result);
    printf("%lf", _result);

    return 007;
}

// same function  ceil will be the full value of 6
/// and the floor will be 5;

//trunc remove after 0 values only prints the int topic;

