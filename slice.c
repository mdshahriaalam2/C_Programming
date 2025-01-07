#include <stdio.h>
#include <string.h>

// write a function named slice, which takes a string & returns a sliced string from index n to m

void slice(char arr[], int n, int m);

int main()
{

    return 0;
}

void slice(char arr[], int n, int m)
{
    char newstr[100];

    for (int i = n, j = 0; i < m; i++, j++)
    {
        newstr[j] = arr[i];
    }
}