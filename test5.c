#include <stdio.h>

// Condition 

int main() {
    int age = 19;
    printf(" Enter your age: ");
    scanf("%d", &age);

    if (age > 18 ){
        printf(" Adult \n");
        printf("vote\n");
        printf("enter into contracts\n");
        printf("own property\n");
        printf("privacy\n");
        printf("freedom of speech\n");
        printf("freedom of religion\n");
        printf("due process of law\n");
        printf("a fair trial\n");
        printf("be free from cruel and unusual punishment \n"); 
    }else{
        printf("Not Adult \n");
    }
    return 0;
}