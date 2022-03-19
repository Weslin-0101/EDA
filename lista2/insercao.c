#include<stdio.h>
#include<stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void insere_inicio(celula *le, int x) {
    celula *novo = malloc(sizeof(celula));
    novo->dado = x;
    novo->prox = le->prox;
    le->prox = novo;
}

void insere_antes(celula *le, int x, int y) {
    celula *p;
    for(p = le; p->prox != NULL && p->prox->dado != y; p = p->prox);
    insere_inicio(p, x);
}


void imprime(celula *le) {
    for(celula *p = le->prox; p != NULL; p = p->prox) {
        printf("%d ->", p->dado);
    }

    printf("NULL\n");
}

int main() {

    celula *le;
    int x,y;

    le = malloc(sizeof(celula));
    le->prox = NULL;

    printf("Digite o numero que queira ser inserido: ");
    scanf("%d", &x);
    insere_inicio(le, x);
    printf("Numero inserido com sucesso!\n");
    imprime(le);

    printf("Digite o qual numero quer inserir: ");
    scanf("%d", &x);
    printf("Antes de qual numeiro queira inserir: ");
    scanf("%d", &y);
    insere_antes(le, x, y);
    printf("Inserido com sucesso!\n");
    imprime(le);

    return 0;
}
