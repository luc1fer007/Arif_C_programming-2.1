#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
struct address
{
    int houseno;
    int block;
    char city[100];
    char state[100];
};

void printaddress(struct address add);   //no [] only name of the struct

void main()
{
    struct address add[5];
    // //TESTING INPUT//
    // struct address p1[]={25,7,"Boston","USA"};
    // struct address p2[]={30,9,"chicago","USA"};
    // struct address p3[]={60,7,"Texas","USA"};
    // struct address p4[]={50,6,"Dallas","USA"};
    // struct address p5[]={40,5,"Montero","USA"};

    //User input

    printf("Enter info for person1: ");
    scanf("%d",&add[0].houseno);
    scanf("%d",&add[0].block);
    scanf("%s",&add[0].city);
    scanf("%s",&add[0].state);

    printf("Enter info for person2: ");
    scanf("%d",&add[1].houseno);
    scanf("%d",&add[1].block);
    scanf("%s",&add[1].city);
    scanf("%s",&add[1].state);

    printf("Enter info for person3: ");
    scanf("%d",&add[2].houseno);
    scanf("%d",&add[2].block);
    scanf("%s",&add[2].city);
    scanf("%s",&add[2].state);

    printf("Enter info for person4: ");
    scanf("%d",&add[3].houseno);
    scanf("%d",&add[3].block);
    scanf("%s",&add[3].city);
    scanf("%s",&add[3].state);

    printf("Enter info for person5: ");
    scanf("%d",&add[4].houseno);
    scanf("%d",&add[4].block);
    scanf("%s",&add[4].city);
    scanf("%s",&add[4].state);

    printaddress(add[0]);
    printaddress(add[1]);
    printaddress(add[2]);
    printaddress(add[3]);
    printaddress(add[4]);

}


void printaddress(struct address add)   //No [] only name of the struct//
{
   printf("%d %d %s %s\n",add.houseno,add.block,add.city,add.state);
}

