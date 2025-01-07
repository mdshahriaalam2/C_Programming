#include <stdio.h>
#include <string.h>
#include <strings.h>

int main()
{
    /*
    char name[] = "hhh";
    char last[] = "hhh";

    printf("%d\n", strcmp(last, name));
    // strcat(name, last);
    // puts(name);
*/
    char name[100];
    char ch;
    int i = 0;
    while (ch != '\n')
    {
        scanf("%c", &ch);
        name[i] = ch;
        i++;
    }
    name[i] = '\0';
    puts(name);

    return 0;
}