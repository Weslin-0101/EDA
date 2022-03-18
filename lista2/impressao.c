#include<stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void imprime(celula *le) {
    for(celula *p = le->prox; p != NULL; p = p->prox) {
        printf("%d ->", p->dado);
    }

    printf("NULL\n");
}

void imprime_rec(celula *le) {
    if(le->prox == NULL) {
        printf("NULL\n");
    } else {
        printf("%d -> ", le->prox->dado);
        imprime_rec(le->prox);
    }
}

/*
int main() {

    celula no1, no2, no3, le;

    no1.dado = 1;
    no2.dado = 2;
    no3.dado = 3;

    le.prox = &no1;
    no1.prox = &no2;
    no2.prox = &no3;
    no3.prox = NULL;

    imprime(&le);
    imprime_rec(&le);
    return 0;
}
*/