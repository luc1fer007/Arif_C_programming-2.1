// #include<stdio.h>

// void sort(int array[], int size)
// {
//     for (int i = 0; i<size-1; i++)
//     {
//         for (int j = 0; j<size -i-1; j++)
//         {
//             if (array[j]< array[j+1])         // if u want to descend just > in this order..
//             {
//                 int temp = array [j];
//                 array[j]= array [j+1];
//                 array [j+1] = temp;
//             }
//         }
//     }
// }


// void printarray(int array[], int size){

//     for (int i = 0; i<size; i++ )
//     {
//         printf("%d ", array[i]);
//     }
// }
// int main(){

//     int array[] = {9,1,8,2,7,3,6,4,5};
//     int size = sizeof(array)/sizeof(array[0]);

//     sort(array, size);
//     printarray(array,size);

//     return 0;
// }



// sort an array of character...




#include<stdio.h>

void sort(char array[], int size)
{
    for (int i = 0; i<size-1; i++)
    {
        for (int j = 0; j<size -i-1; j++)
        {
            if (array[j]< array[j+1])         // if u want to descend just > in this order..
            {
                int temp = array [j];
                array[j]= array [j+1];
                array [j+1] = temp;
            }
        }
    }
}


void printarray(char array[], int size){

    for (int i = 0; i<size; i++ )
    {
        printf("%c ", array[i]);
    }
}
int main(){

    // int array[] = {9,1,8,2,7,3,6,4,5};
    char array[]= {'f', 'g','j', 'y', 'u', 'i'};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printarray(array,size);

    return 0;
}


