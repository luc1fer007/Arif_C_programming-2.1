//Effective method to do so///

int main(void)
{
    int N;
    scanf("%d",&N);
    int i,p1= 0,p2=1,temp;
    for(i = 1 ; i<= N ; i++)
    {
        if(i==1)printf("0 ");
        else if (i==2)printf("1 ");
        else 
        {
            printf("%d ",p1+p2);
            temp = p2;
            p2 = p1 + p2;
            p1=temp;
        }
    }
    return 0;
}

//another method to do so but not effective///
#include<stdio.h>
int main()
{
    short int N,i,p1 = 0 , p2 = 1,temp;
    scanf("%hd",&N);
    printf("%hd %hd ",p1,p2);
    for(i = 3 ; i<= N ; i++)
    {
        printf(" %hd",p1+p2);
        temp = p2;
        p2 = p1 + p2;
        p1 = temp;

    }
    
}
