#include <stdio.h>

// Create a string firstname & lastname to store details of user & print all the characters using a loop

// define function

/*
void printstring(char arr[]);
int main()
{
    char firstn[] = "Minhazur";
    char lastn[] = "Rahman";

    printstring(firstn);
    printf(lastn);
    return 0;
}
void printstring(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}*/

int main()
{
    // char name[] = "Md. Shifat";

    // char name[100];
    // scanf("%s", name);
    // printf("your fullname is: %s\n", name);

    // Gets & Puts

    char str[10];
    gets(str); // gets is very dangerous
    puts(str);

    return 0;
}