#include <stdio.h>

int main()
{
    int marks[3];

    printf("Enter the marks of phy: ");
    scanf("%d", &marks[0]);

    printf("Enter the marks of chem: ");
    scanf("%d", &marks[1]);

    printf("Enter the marks of math: ");
    scanf("%d", &marks[2]);

    printf("Physics = %d\n", marks[0]);
    printf("Chemistry = %d\n", marks[1]);
    printf("Math = %d\n", marks[2]);
    // print the avg of tree sub

    int avg = (marks[0] + marks[1] + marks[2]) / 3;
    printf("avg = %d\n", avg);

    return 0;
}