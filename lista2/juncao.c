#include <stdio.h>

typedef struct celula{
    int dado;
    struct celula *prox;
} celula;

void mescla_listas(celula *l1, celula *l2, celula *l3){
    l3->prox = l1->prox;
    celula *p3;
    celula *p2 = l2->prox;
    for (p3 = l3; p3->prox != NULL; p3 = p3->prox){
        if (p2 != NULL && p2->dado < p3->prox->dado){
            celula *aux = p2;
            p2 = p2->prox;
            aux->prox = p3->prox;
            p3->prox = aux;
        }
    }

    if (p2 != NULL) p3->prox = p2;
}

/*
void imprime_rec(celula *le) {
    if(le->prox == NULL) {
        printf("NULL\n");
    } else {
        printf("%d -> ", le->prox->dado);
        imprime_rec(le->prox);
    }
}


int main() {
    celula l1, l2, l3, n1, n2, n3, n4, n5, n6, n7;
    
    l1.prox = &n1;
    n1.dado = 1;
    n1.prox = &n2;
    n2.dado = 7;
    n2.prox = &n3;
    n3.dado = 9;
    n3.prox = &n4;
    n4.dado = 10;
    n4.prox = NULL;


    l2.prox = &n5;
    n5.dado = 2;
    n5.prox = &n6;
    n6.dado = 3;
    n6.prox = &n7;
    n7.dado = 8;
    n7.prox = NULL;

    imprime_rec(&l1);
    imprime_rec(&l2);

    mescla_listas(&l1, &l2, &l3);
    imprime_rec(&l3);

    return 0;
}

*/