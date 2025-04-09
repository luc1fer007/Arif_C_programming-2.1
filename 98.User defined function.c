#include<stdio.h>

double calculatepower(double a, double y)
{
    double base,exp,result=1,i;
    for( i=1;i<=exp;i++)
    {
        result=result*base;
    }printf("%0.2lf\n",result);

}


int main()
{
    double a,y;
    printf("Enter a,b: ");
    scanf("%lf %lf",&a,&y);
    
    double result = calculatepower(a,y);
    return 0;

}



//using library
#include<stdio.h>
#include<math.h>

double powerof(double base, double exp)
{
    return(pow(base,exp));

}


int main()
{
    double base,exp;
    printf("Enter base and exp: ");
    scanf("%lf %lf",&base,&exp);

    double _powerof= powerof(base,exp);
    printf("%0.2lf\n",_powerof);
    return 0;
}
