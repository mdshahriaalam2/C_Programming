#include <stdio.h>

void square(int n);
int main()
{
    square(5);
    return 0;
}
void square(int n)
{
    n *= n;
    printf("%d\n", n);
    return;
}