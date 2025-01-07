#include <stdio.h>

void print_array(int arr[], int n);

// 1D array
int main()
{
    int arr[] = {10,
                 20,
                 30,
                 40,
                 50,
                 60,
                 70,
                 80,
                 90};

    int k = sizeof(arr) / sizeof(int);
    print_array(arr, k);
    return 0;
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}