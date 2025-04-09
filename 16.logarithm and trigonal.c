#include<stdio.h>
#include<math.h>
int main()
{
    double x = 10.5;
    double result = log(x);
    double _result = log10(x);

    double __result = sin(x);
    double ___reult = exp(x);

    double ____result = tan(x);

    printf("log(%0.2lf) = %lf\n", x, result);
    printf("log10(%0.2lf) = %lf\n", x, _result);

    printf("sin(%0.2lf) = %lf\n", x, __result);

    printf("exp(%0.2lf) = %lf\n", x, ___reult);

    printf("tan(%0.2lf) = %lf\n", x, ____result);

    return 007;
}