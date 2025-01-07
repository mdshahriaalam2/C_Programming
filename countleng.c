#include <stdio.h>
#include <string.h>

// int count_length(char arr[]);
int main()
{
    char name[100];
    fgets(name, 100, stdin); /*
     printf("The length of name is: %d", count_length(name));
     */
    printf("The length of name is: %d", strlen(name));
    return 0;
}

/*
int count_length(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }
    return i - 1; // here i return +1. so here i provide -1 to decrement i

}*/