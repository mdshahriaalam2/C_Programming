#include <stdio.h>

int main(){
    // int a = 2 * 6 / 25 - 5;
    // if(a > 0)
    //     printf("%d\n", a);    
    // else 
    //     printf("The number is negative\n");
    //     printf("The number is %d\n", a);

    int num = 5*2-3*2;
    printf("The number is %d\n", num);
    // 4

    int num1 = 5*2/2*3;
    printf("The number is %d\n", num1);
    // 15

    int num2 = 5*(2/2)*3;
    printf("The number is %d\n", num2);
    // 15

    int num3 = 5+2/2*3; // 5 + (2/2=1) * 3 = 8
    printf("The number is %d\n", num3);
    

    return 0;
}