#include <stdio.h>

/*
int main()
{

   // Q1: write a program to enter price of 3 items & print their final cost with 18% gst

   //Ans:

   float price[3];
   printf("Enter a price of 3 items \n");
   scanf("%f %f %f", &price[0], &price[1], &price[2]);
   printf("total price 1: %.2f\n", price[0] + (0.18 * price[0]));
   printf("total price 2: %.2f\n", price[1] + (0.18 * price[1]));
   printf("total price 3: %.2f\n", price[2] + (0.18 * price[2]));
   double age = 23.00;
   double *ptr = &age;
   printf("ptr %u\n", ptr);
   ptr--;
   printf("ptr %u\n", ptr);

   return 0;
}
*/

// Q2: Write a function to count the number of odd numbers in an array.
// Ans:

/*
int countodd(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Number of odd numbers in array: %d\n", countodd(arr, n));
    return 0;
}
int countodd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}
*/

/*
// Q3: write a function to reverse the order of an array
// Ans:

int reverse(int arr[], int n);
void printarr(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, n);
    printarr(arr, n);
    return 0;
}

int reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    return 0;
}

void printarr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
*/

/*
// Q4: write a function to store the first n fibonacci numbers
// Ans:

int fibonacci(int n);

int main()
{
    int n;

    printf("Enter a n(n>2): ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2]; // Calculation of fibonacci number
        printf("%d \t", fib[i]);
    }

    return 0;
}*/

/**/
// Q4: create a 2D array, storing the tables of 2 & 3.
// Ans:
void storetables(int arr[][10], int n, int m, int number);

int main()
{
    int tables[2][10];
    storetables(tables, 0, 10, 2);
    storetables(tables, 1, 10, 3);

    for (int i = 0; i < 10; i++)
    {
        printf(" %d \t", tables[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d \t", tables[1][i]);
    }
}
void storetables(int arr[][10], int n, int m, int number)
{

    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number * (i + 1);
    }
}