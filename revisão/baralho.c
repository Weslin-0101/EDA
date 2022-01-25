#include<stdio.h>

// Função vai se responsabilizar para encontrar a posição da carta
int naipe(char n) {
    switch(n) {
        case 'C': return 0;
        case 'E': return 1;
        case 'U': return 2;
        case 'P': return 3;
    }
}

int main() {
    char n;
    int carta, cartas[4][13], f[4];

    // Inicializa a matriz e o vetor
    for (int i = 0; i < 4; i++) {
        f[i] = 13;
        for (int j = 0; j < 13; j++) {
            cartas[i][j] = 0;
        }
    }

    // Para ler dois inteiro e depois um char, assim contabilizando
    while (scanf("%d", &carta) > 0) {
        n = getchar();

        cartas[naipe(n)][carta-1]++;
        if (cartas[naipe(n)][carta-1] > 1) {
            f[naipe(n)] = -1;
        } else {
            f[naipe(n)]--;
        }
    }

    // para o caso de acharmos alguma carta duplicada
    for(int i = 0; i < 4; i++) {
        if(f[i] < 0) {
            printf("erro\n");
        } else {
            printf("%d\n", f[i]);
        }
    }

    return 0;
}