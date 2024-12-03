/*
    Simple Calculator implementation
*/
#include "stdio.h"
#include "math.h"

void print_menu();

int main() {
    int choice;
    double first, second, result;

    printf("Welcome to the Simple Calculator!\n");

    do{
    print_menu();
    scanf("%d", &choice);
    if (choice < 1 || choice > 7){
        printf("Invalid choice! Try again...!\n");
        continue;
    }
    if (choice == 7){
        printf("Exiting the program...\n");
        return 0;
    }
    printf("Enter the first number: ");
    scanf("%lf", &first);
    printf("Now, Enter the second number: ");
    scanf("%lf", &second);

    switch (choice)
    {
    case 1: // Addtion
        result = first + second;
        break;
    case 2: // Subtract
        result = first - second;
        break;
    case 3: // Multiply
        result = first * second;
        break;
    case 4: // Divide
        if (second == 0){
           fprintf(stderr, "Invalid Argument for Division!\n");
            continue;
        }
        result = first / second; 
        break;
    case 5: // Modulos
        if (second == 0){
            fprintf(stderr, "Invalid Argument for Modulus!\n");
            continue;
        }  // Converting both numbers to integers to avoid floating point error
        result = (int)first % (int)second;
        break;
    case 6: // Power
        result = pow(first, second);
        break;
    
    default:
        break;
    }

    printf("\nThe result is: %.2lf\n", result);
    } while (choice != 7);

    return 0;
}

void print_menu(){
    printf("\n============###########==========\n");
    printf("Choose one of the following options:\n");
    printf("\t1. Add\n");
    printf("\t2. Subtract\n");
    printf("\t3. Multiply\n");
    printf("\t4. Divide\n");
    printf("\t5. Modulus\n");
    printf("\t6. Power\n");
    printf("\t7. Exit\n");  
    printf("\nEnter your choice: ");
}
