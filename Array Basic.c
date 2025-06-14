#include<stdio.h>
int main()                
{
    int a,arr[a],sum = 0;
    scanf("%d",&a);
    for(int i = 0 ; i < a ; i++)
    {
        scanf("%d",&arr[i]); ///1st loop to gather all the data for the array///
    }
    for(int i = 0 ; i < a ; i++)
    {
        sum = sum + arr[i]; ///2nd loop to use  all the data in the array///
    }
    printf("%d\n",sum);
    double S = (double)sum;
    double avg = S / a;
    printf("%.2lf\n",avg);

}
