#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Bankaccount
{
    int account_no;
    char name[100];
}acc;

int main()
{
   acc acc1={124,"lucifer"};
   acc acc2={456,"jamesbond"};
   acc acc3={145,"adhil"};


   printf("%d %s\n",acc1.account_no,acc1.name);
   printf("%d %s\n",acc2.account_no,acc2.name);
   printf("%d %s\n",acc3.account_no,acc3.name);

    
}