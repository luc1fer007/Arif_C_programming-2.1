#include<stdio.h>
// #include<math.h>        un comment it if u use sqrt..
#include<ctype.h>

int main()
{
    int number,count=0 ;
    printf("enter number: ");
    scanf("%d",&number);

    if(number<=1)
    {
        
        count = 1;
    }

    for(int i = 2; i<=number/2; i++)    // or u can use i<=sqrt(number);
    {
        if (number%i==0)
        {
            count++;
            break;
            

        }
        

    }
    if(count==0)
        {
            printf("%d is a prime number\n",number);

        }
        else{
            printf("%d is not a prime number",number);

        }
    return 007;
}