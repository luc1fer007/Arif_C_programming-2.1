// #include<stdio.h>

// int main(){

//     int a[5], sum= 0;
//     a[0]= 5;
//     a[1] = 6;
//     a[2] =7;
//     a[3] = 6;
//     a[4] = 2;
//     for(int i = 0;i<5;i++){
//         sum = sum +a[i];
//     }
//     printf("The sum is : %d\n ", sum);
//     printf("The avg is : %f\n", (float)sum/5);
    

  
// }


// #include<stdio.h>
// int main(){
//     int a[10], sum = 0;
    
//     printf("Enter Number : ");
//     for (int i= 0; i<10; i++){

//         scanf("%d ", &a[i]);
//     }

//     for (int i =0;i<10;i++){

//         sum = sum +i;
        


//     }printf("%d\n", sum);
//     printf("%f\n", (float)sum/10);
    

    
//     return 0;


// }

// Write a programme that read 10 numbers and display their sum and avarages//

#include<stdio.h>

int main(){
    int a[10],sum = 0,n,i;

    printf("Enter ur number: ");
    scanf("%d",&n);
    for (int i =0;i<n; i ++){
        scanf("%d", &a[i]);

    }
    for (int i =0;i<n;i++){
        sum = sum +a[i];
    }
    printf("%d\n: ", sum);
    printf("%f: ", (float)sum/2);
    return 0;
}