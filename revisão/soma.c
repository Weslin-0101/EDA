#include<stdio.h>

int main() {
    int num, cont=0;

    while (scanf("%d", &num) != 0) {
        cont++;
        num += cont;
    }

    printf("%d %d", cont, num);
}