#include<stdio.h>
#include<math.h>


int sum(int num1,int num2)
{
    return num1+num2;
}





int main()
{
    int num1,num2;
    printf("Enter Your numbers: ");
    scanf("%d %d",&num1,&num2);

    int result = sum(num1,num2);

    printf("Sum is: %d\n",result);
    
    return 0;

}