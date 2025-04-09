#include<stdio.h>
#define month 12
#define PI 3.1416
const int ar1 = 15;
const float age = 25.5;
const double d;

int main()
{
    const int ar2 = 5,ar3 =6;
    double local_d = 45;
   

    printf("%d\n%d\n%d\n",ar1,ar2,ar3);
    printf("%0.1f\n",age);
    // printf("%0.1lf\n",global_d);
    printf("%0.1lf\n",local_d);
    printf("%d\n",month);
    printf("%0.4lf\n",PI);

}