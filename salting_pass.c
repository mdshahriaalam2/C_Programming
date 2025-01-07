#include <stdio.h>
#include <string.h>

#include <strings.h>
void saltpass(char password[]);
int main()
{
    char pass[100];
    scanf("%s", pass);
    saltpass(pass);
}

void saltpass(char password[])
{

    char salt[] = "hardcoded";
    char newpass[200];
    strcpy(newpass, password);
    strcat(newpass, salt);
    puts(newpass);
}