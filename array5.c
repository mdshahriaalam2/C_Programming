#include <stdio.h>

// 2D array

int main()
{
    int marks[2][3]; // strcut of array is 2 x 3

    marks[0][0] = 98;
    marks[0][1] = 97;
    marks[0][2] = 99;

    marks[1][0] = 95;
    marks[1][1] = 89;
    marks[1][2] = 96;

    printf("%d\n", marks[0][0]);
    printf("%d\n", marks[0][1]);
    printf("%d\n", marks[0][2]);
    return 0;
}