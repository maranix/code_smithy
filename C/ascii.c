#include <stdio.h>

int ascii(char a){
    printf("ASCII Value: %d", a);
}

int main(){
    char a;

    printf("Enter a character: ");
    scanf("%c", &a);
    ascii(a);
}