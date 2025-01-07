#include <stdio.h>

// Pointer to pointer

// what is pointer ? ?

//                   In computer programming,
// a pointer is a variable that stores the memory address of another variable or object.Pointers allow for efficient manipulation and referencing of data by directly accessing its location in memory.int main(int argc, char *argv[])
int main()
{
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("%d\n", *p);
    printf("%d\n", **pp);
    printf("pp Address = %p\n", &pp);
    printf("pp %p\n", &p);

    return 0;
}