#include <stdio.h>
#include <stdlib.h>

typedef struct tipoNo
{
    int valor;
    struct tipoNo *prox;
} tipoNo;

typedef struct tipoPilha
{
    tipoNo *topo;
} tipoPilha;

short qtdDescarte;

void criaPilha(tipoPilha *pilha)
{
    pilha->topo = NULL;
}

void empilha(tipoPilha *pilha, int carta)
{
    tipoNo *ponteiro = (tipoNo *)malloc(sizeof(tipoNo));

    if (!ponteiro)
    {
        exit(1);
    }

    ponteiro->prox = pilha->topo;
    pilha->topo = ponteiro;
    ponteiro->valor = carta;
}

void remover(tipoPilha *pilha, int *descartes)
{
    tipoNo *ponteiro;
    if (ponteiro)
    {
        if (!pilha->topo->prox)
        {
            return;
        }

        do
        {
            ponteiro = pilha->topo;
            descartes[qtdDescarte++] = ponteiro->valor;
            pilha->topo = pilha->topo->prox;
            free(ponteiro);
            moverTopo(pilha);
        } while (pilha->topo->prox);
    }
}

void moverTopo(tipoPilha *pilha)
{
    tipoNo *aux, *base;
    base = pilha->topo;
    aux = pilha->topo;

    if (base->prox)
    {
        while (base->prox)
        {
            base = base->prox;
        }
        pilha->topo = pilha->topo->prox;
        aux->prox = base->prox;
        base->prox = aux;
    }
}

void apagaPilha(tipoPilha *pilha)
{
    tipoNo *aux;

    aux = pilha->topo;
    pilha->topo = NULL;
    free(aux);
}

void main()
{
    int carta;
    tipoPilha pilha;
    short i;

    scanf("%d", &carta);

    if (carta == 0 || carta > 50)
    {
        return;
    }
    criaPilha(&pilha);
    int descartar[carta];

    for (i = carta; i > 0; i--)
    {
        empilha(&pilha, i);
    }
    qtdDescarte = 0;
    remover(&pilha, descartar);

    printf("Cartas descartadas:");
    for (i = 0; i < qtdDescarte; i++)
    {
        printf(" %d", descartar[i]);
        if (i != qtdDescarte - 1)
        {
            printf(",");
        }
    }

    printf("\nCarta restante: %d\n", pilha.topo->valor);
    apagaPilha(&pilha);
}