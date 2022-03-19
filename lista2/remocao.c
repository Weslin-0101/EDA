#include<stdio.h>
#include<stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int remove_depois(celula *p) {
    celula *lixo = p->prox;
    if(lixo != NULL) {
        int y = lixo->prox;
        p->prox = lixo->prox;
        free(lixo);
        return y;
    }
}

void remove_elemento(celula *le, int x) {
    celula *p;
    for(p = le; p->prox != NULL && p->prox->dado != x; p = p->prox);
    remove_depois(p);
}

void remove_todos_elementos(celula *le, int x) {
    celula *p1, *p2;
    
    do {
        for(p1 = le; p1->prox != NULL && p1->prox->dado != x; p1 = p1->prox);
        p2 = p1->prox;
        remove_depois(p1);
    } while (p2 != NULL);
}
/*
void insere_inicio(celula *le, int x) {
    celula *novo = malloc(sizeof(celula));
    novo->dado = x;
    novo->prox = le->prox;
    le->prox = novo;
}

void imprime_rec(celula *le) {
    if(le->prox == NULL) {
        printf("NULL\n");
    } else {
        printf("%d -> ", le->prox->dado);
        imprime_rec(le->prox);
    }
}

void menu() {
    printf("[1] - Inserir elemento\n");
    printf("[2] - Remover elemento\n");
    printf("[3] - Remover todos os elementos\n");
    printf("[4] - Imprimir os elementos (Recursiva)\n");
    printf("Digite o que deseja: ");
}

int main() {

    celula no1, no2, no3, *le;
    int x,y,op;

    le = malloc(sizeof(celula));
    le->prox = NULL;

    menu();
    scanf("%d", &op);
    do {
        switch(op) {
            case 1:
                printf("Digite qual elemento deseja inserir: ");
                scanf("%d", &x);
                insere_inicio(le, x);
                printf("Elemento inserido com sucesso!\n");
                break;
            
            case 2:
                printf("Digite qual elemento deseja remover: ");
                scanf("%d", &x);
                remove_elemento(le, x);
                printf("Elemento removido com sucesso!\n");
                break;
            
            case 3:
                printf("Digite qual número deseja deseja remover todas as suas ocorrências: ");
                scanf("%d", &x);
                remove_todos_elementos(le, x);
                printf("Todas as ocorrencias do numero %d foram removidas\n", x);
                break;
            
            case 4:
                imprime_rec(le);
                break;
        } 
    } while(op != 5);
    return 0;
}
*/