#include <stdio.h>

int main()
{

    // char can be modified but arr can not be modified
    char *canchange = "Hello World";
    puts(canchange);

    canchange = "Hello";
    puts(canchange);

    char cannotchange[] = "Hello World";
    puts(cannotchange);

    // cannotchange = "Hello";
    // puts(cannotchange);
    return 0;
}