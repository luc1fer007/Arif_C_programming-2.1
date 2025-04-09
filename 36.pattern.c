#include<stdio.h>
int main()
{
    char star,row,col;
    printf("Enter ch: ");
    scanf("%d",&star);

    for(row=1;row<=star;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("* ");             // just input(*) to print the stars
                                       
        }printf("\n");
    }return 007;
}



#include<stdio.h>
int main()
{
    char star,row,col;
    printf("Enter ch: ");
    scanf("%d",&star);

    for(row=1;row<=star;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("# ");             // just input(*) to print the stars
                                       
        }printf("\n");
    }return 007;
}