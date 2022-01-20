#include<stdio.h>

int main() {
    
    int qnt, cont = 0;

    while (scanf("%d", &qnt) != EOF) {
        cont++;
    }

    printf("%d", cont);
}