#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int dado;
    struct no *esq, *dir;
} no;

typedef struct celula
{
    no *dado;
    struct celula *prox;
} celula;

celula *cria_pilha()
{
    celula *topo = malloc(sizeof(celula));
    topo->prox = NULL;
    return topo;
}

int isPilhaVazia(celula *pilha)
{
    if (pilha->prox == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void empilha(celula *p, no *x)
{
    celula *ponteiro = malloc(sizeof(celula));
    ponteiro->dado = x;
    ponteiro->prox = p->prox;
    p->prox = ponteiro;
}

no *desempilha(celula *p)
{
    no *numero;
    celula *lixo = p->prox;
    numero = lixo->dado;
    p->prox = lixo->prox;
    free(lixo);
    return numero;
}

void pos_ordem(no *raiz)
{
    no *atual = raiz;
    celula *pilha = cria_pilha();

    while (atual != NULL || isPilhaVazia(pilha) == 1)
    {
        if (atual != NULL)
        {
            empilha(pilha, atual);
            atual = atual->esq;
        }
        else
        {
            no *ex = pilha->prox->dado->dir;
            if (ex != NULL)
            {
                atual = ex;
            }
            else
            {
                ex = desempilha(pilha);
                printf("%d ", ex->dado);

                while (isPilhaVazia(pilha) == 1 && ex == pilha->prox->dado->dir)
                {
                    ex = desempilha(pilha);
                    printf("%d ", ex->dado);
                }
            }
        }
    }
}

no *cria_arvore(int x, no *esq, no *dir)
{
    no *raiz = malloc(sizeof(no));
    raiz->dado = x;
    raiz->esq = esq;
    raiz->dir = dir;
    return raiz;
}

/*
no *procurar(no *raiz, int x)
{
    if (raiz == NULL || raiz->dado == x)
        return raiz;
    no *esq = procurar(raiz->esq, x);
    if (esq != NULL)
        return esq;
    return procurar(raiz->dir, x);
}

void insere(no *raiz, int x, int y, char L)
{
    // Nós inserimos o x ao lado do L de y
    no *procurado = procurar(raiz, y);
    if (L == 'E')
    {
        no *novo = cria_arvore(x, procurado->esq, NULL);
        procurado->esq = novo;
    }
    else
    {
        no *novo = cria_arvore(x, NULL, procurado->dir);
        procurado->dir = novo;
    }
}

int main()
{

    int elem, novo;
    char lado;

    scanf("%d", &novo);
    no *raiz = cria_arvore(novo, NULL, NULL);

    while (scanf("%d %c %d", &novo, &lado, &elem) != EOF)
    {
        insere(raiz, novo, elem, lado);
    }

    printf("Pos Ordem: ");
    pos_ordem(raiz);
    printf("\n");

    return 0;
}
*/