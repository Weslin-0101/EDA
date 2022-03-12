#include<stdio.h>
#include<stdlib.h>

/*
    Questão de maluco esse em
*/

void movaX(char *str, int i){

    if (str[i] != '\0') {
        if (str[i] != 'x') {
            printf("%c", str[i]);
            movaX(str, i+1);
        } else {
            movaX(str, i+1);
            printf("%c", str[i]);
        }
    }
}

int main() {
    
    char str[102];

    scanf(" %s", str);
    movaX(str, 0);
    printf("\n");

    return 0;
}