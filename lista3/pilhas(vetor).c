#include <stdio.h>
#include <stdlib.h>

typedef struct pilha
{
    int *dados;
    int N, topo;
} pilha;

pilha *cria_pilha()
{
    pilha *p = malloc(sizeof(pilha));
    p->N = 10;
    p->dados = malloc(p->N * sizeof(int));
    p->topo = 0;
    return p;
}

int empilha(pilha *p, int x)
{
    if (p->topo == p->N)
    {
        p->dados = realloc(p->dados, 2 * p->N * sizeof(int));
        if (p->dados == NULL)
            return 0;
    }
    p->dados[p->topo] = x;
    p->topo++;
    return 1;
}

int desempilha(pilha *p, int *y)
{
    if (p->topo == 0)
        return 0;
    p->topo--;
    *y = p->dados[p->topo];
    return 1;
}

/*
int main()
{
    int y;
    pilha *p = cria_pilha();

    empilha(p, 1);
    empilha(p, 2);
    empilha(p, 13);

    desempilha(p, &y);

    free(p->dados);
    free(p);

    return 0;
}
*/