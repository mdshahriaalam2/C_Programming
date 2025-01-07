#include <stdio.h>

int main(){
    int a = 10;
    int b = 10;

    // There is %p for print the variable memory location. you have to provide the & sign before variable allocation names. 
    
    printf("The address of a is %p\n", &a);
    // 0x7ffff51292bc
    printf("The address of a is %p\n", &b);
    // 0x7ffff51292b8

    unsigned int num = 25001574;
    printf("The value of num in hexadecimal is: %x\n", num);

    return 0;
}