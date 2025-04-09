#include<stdio.h>
int main()
{
    int w;
    printf("Enter killos: ");
    scanf("%d",&w);

    if(1<=w && w<=100)
    {
        if(w%2==0 && w>2)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }else
    {
        printf("WRONG INPUT");
    }
 
    
    return 0;
}