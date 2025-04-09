// #include<stdio.h>

// int main(){


//     // 2D array = an array, where each element is an entire array
//     //                    useful if u need a maltrix, grid , table of data..


//     // int numbers[2][3]={
//     //                   {1,2,3},
//     //                   {4,5,6}
//     //                 };

    
    
//     int numbers[3][3];

//     int rows = sizeof(numbers)/sizeof(numbers[0]);   // they both have the same size
//     int column = sizeof (numbers[0])/ sizeof(numbers[0][0]);

//     printf("%d\n", rows);
//     printf("%d\n", column);


//     numbers[0][0] = 1;
//     numbers[0][1] = 2;
//     numbers[0][2] = 3;
//     numbers[1][0] = 4;
//     numbers[1][1] = 5;
//     numbers[1][2] = 6;
//     numbers[2][0] = 7;
//     numbers[2][1] = 9;
//     numbers[2][2] = 5;

//     for (int i = 0; i<rows; i++){
//         for (int j = 0; j<3; j++){

//             printf("%d ", numbers[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }



// anisul islalm 

// #include<stdio.h>

// int main(){

//     int marks[11] = {8,5,9,6,8,2,3,4,7,1,2,5};
//     for(int i = 0;i<= sizeof(marks)/sizeof(marks[i]);i++){
//         printf("%d ", marks[i]);
//     }
    
//     return 0;
// }


// user input

#include<stdio.h>

int main(){

    int n;

   
    printf("Enter number: ");

    scanf("%d", &n);

    int marks[n];
    for (int i = 0;i<=n;i++){
        printf("%d\n", marks[i]);

    }return 0;




    
}