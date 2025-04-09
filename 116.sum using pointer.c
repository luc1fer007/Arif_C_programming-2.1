// #include<stdio.h>
// int main()
// {
//     int x=10,y=20,sum;
//     int *ptr1,*ptr2;

//     ptr1 = &x;
//     ptr2 = &y;

//     sum= *ptr1+ *ptr2; 

//     printf("sum is: %d\n",sum);
    
   

    
//     return 0;

// }



#include<stdio.h>

int main()
{
    int x=30,y=45,sum,mult,subs,*ptr1,*ptr2;
    float div;

    ptr1 = &x;
    ptr2 = &y;

    sum = *ptr1+*ptr2;
    printf("%d\n",sum);

    subs = *ptr1-*ptr2;
    printf("%d\n",subs);

    mult = *ptr1* *ptr2;
    printf("%d\n",mult);

    div = (float)*ptr1 / *ptr2;
    printf("%f\n",div);
}