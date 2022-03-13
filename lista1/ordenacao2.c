#include<stdio.h>

/*
    1 - Usando uma função auxiliar para poder usar o caso base
    caso base => i <= 0 && v[i] <= elem

*/

int ordenaAux(int *v, int i, int e) {
    if(i < 0 || v[i] <= e) return i;

    v[i+1] = v[i];
    ordenaAux (v, i-1, e);
}

void ordena (int *v, int n) {
    int i, e;

    if(n <= 1) return;

    ordena (v, n-1);
    e = v[n-1];
    i = ordenaAux (v, n-2, e);
    v[i+1] = e;
}

/*
int main() {

    int e[6] = { 2, 4, 6, 7, 3, 1 };

    orderna(e, 6);  
    printf("%d", e[0]);
    for(int i=1; i<6; i++) {
        printf(", %d", e[i]);
    }
    printf("\n");

    return 0;
}
*/