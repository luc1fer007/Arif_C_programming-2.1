#include<stdio.h>
int sum(int A,int B);

int main()
{
    int A,B;
    printf("Enter A and B: ");
    scanf("%d %d",&A,&B);

    printf("%d",sum(A,B));
    return 0;

}

int sum(int A,int B)
{
    return A+B;
    
}