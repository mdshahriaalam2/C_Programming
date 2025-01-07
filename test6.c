#include <stdio.h>

// Ternary Operator 

int main(){
    /*
    // Condition ? true part : false part;

    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    age >= 18 ? printf("You are Adults!") : printf("You are not.");
    */

    // switch Operator

    int day;
    printf("Enter your day(1-7): ");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("sunday");
        break;
    
    default:
        printf("%d is not a valid day", day);
        break;
    }


    return 0;
}

