#include <stdio.h>

// print_hello
/*

void print_hello()
{
    printf("Hello World!\n");
}

int sum(int i, int j)
{
    return i + j;
}


*/
void calprice(float n);

int main()
{
    float price = 100.00;
    calprice(price);

    return 0;
}
void calprice(float value)
{
    value = value + (0.18 * value);
    printf("Final price is : %.2f\n", value);
}
.0