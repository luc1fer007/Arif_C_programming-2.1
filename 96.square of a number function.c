#include<stdio.h>
#include<math.h>

int square(int a)
{
    return pow(a,2);
}

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d",&a);

    int _square= square(a);

    printf("The sqaure is : %d\n",_square);
    return 0;

}