#include <stdio.h>

void square(int n);   // Call by Value
void _square(int *n); // Call by Reference

/*
    There is 2type of function.
    1. Call by Value
    2. Call by Reference
*/

int main()
{
    int number = 5;
    square(number);
    printf("The number is : %d\n", number);

    _square(&number);
    printf("number is : %d\n", number);
    return 0;
}

// Call by Value
void square(int n)
{
    n = n * n;
    printf("Square is: %d\n", n);
    return;
}

// Call by Reference
void _square(int *n)
{
    *n = (*n) * (*n);
    printf("Square is: %d\n", *n);
    return;
}