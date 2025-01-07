#include<stdio.h>

// Write a code to check if a number is divisible by 2 or not

int main(){
    int inp;
    printf("Enter a number: ");
    scanf("%d", &inp);
    if  (inp % 2 == 0){
        printf("%d divisible by 2 \n", inp);
        printf("The number is also Even\n");
    } 
    else{
        printf("%d not divisible by 2.\n", inp);
        printf("The number is also Odd\n");
    } 

    return 0;
}