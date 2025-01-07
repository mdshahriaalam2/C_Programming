#include<stdio.h>
// Assignment Operators
int main(){
    printf(" 1 is True & 0 is False \n \n \n");
    // There are 4 operators
    // ==
    // >, >=
    // < , <=
    // !=  

    /*
    printf(" %d \n", 3 == 3); // True
    printf(" %d \n", 3 == 4); // False
    printf(" %d \n", 3 > 3); // False
    printf(" %d \n", 3 >= 3); // True
    printf(" %d \n", 3 != 3); // False
    printf(" %d \n", 3 != 4); // True

    */

// Logical operator

    // && And operator (both true)
    // || Or operator (single true)
    // ! Not operator (single false)
    
    printf(" %d \n", (3 >= 3) && (3 != 4)); // True
    printf(" %d \n", (3 >= 4) || (3 != 4)); //True
    printf(" %d \n", !(3 >= 3)); //False

    return 0;

}