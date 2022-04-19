#include <stdio.h>
#include <stdlib.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

celula *enfileira(celula *f, int x)
{
    celula *ponteiro = malloc(sizeof(celula));
    if (f == NULL)
    {
        return ponteiro->prox = NULL;
    }
    else
    {
        ponteiro->prox = f->prox;
        f->prox = ponteiro;
        f->dado = x;
        f = ponteiro;
        return f;
    }
}

int desenfileira(celula *f, int *y)
{
    celula *tira = f->prox;
    if (f->prox == f)
    {
        return 0;
    }
    else
    {
        *y = tira->dado;
        f->prox = tira->prox;
        free(tira);
        return 1;
    }
}
