// //Declaration of pointer
// //data_type *var_name

// /*
// & symbol is used to get the addrss of the variable

// * symbol is used to get the value of the variable that the pointer is pointing to 


// */






// #include<stdio.h>

// int main()
// {
//     int x=5;
//     int y=5;
//     int *ptr;
//     ptr=&x;

//     printf("%d",*ptr);  ///for value
//     printf("%d",ptr); //for address     both can't be print together
//     printf("%d\n",&ptr);

     
// }

#include<stdio.h>
int main()
{
    int x = 51;
    printf("value of X = %d\n",x);
    printf("Add %d\n",&x);
}