#include<stdio.h>

int main(){
/*
    int x = 2;
    if(x=0){
        printf("This is true");
    }else{
        printf("This is false");
    }
*/
    char ch ;
    printf("Enter a character:- ");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z'){
        printf("This is a lower case");
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("This is a upper case");
    }
    else{
        printf("This is not a English character\n");
        printf("You entered %c\n",ch);
    }

    return 0;
}