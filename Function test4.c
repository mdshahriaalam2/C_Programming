#include <stdio.h>

int main()
{
    /*
        // Printing Address
        int age = 22;
        int *ptr = &age;
        int _age = *ptr;
        printf("%p\n", &age); // Hexadecimals
        printf("%p\n", ptr);
        printf("%d\n", _age);
        */
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 1;
    printf("%d\n", x);
    printf("%d\n", *ptr);

    *ptr += 1; // here *ptr is x
    printf("%d\n", x);
    printf("%d\n", *ptr);

    (*ptr)++; // here *ptr = *ptr + 1

    printf("%d\n", x);
    printf("%d\n", *ptr);

    return 0;
}