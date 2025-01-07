#include <stdio.h>

int main()
{
    int age = 28;
    int _age = 24;
    int age2 = 100;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("ptr = %u & _ptr = %u\nDifference = %u\n", &ptr, &_ptr, ptr - &age2);
    printf("ptr = %u\n", &age2);
    _ptr = &age;

    printf("Comparison = %u\n", ptr == _ptr);

    return 0;
}