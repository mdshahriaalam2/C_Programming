#include <stdio.h>

int main()
{
    /*
    // use of fgets()
    struct of fgets : fgets(str, n, file);
*/
    char name[10];

    fgets(name, 10, stdin);
    puts(name);

    return 0;
}