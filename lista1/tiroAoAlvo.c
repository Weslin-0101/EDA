#include<stdio.h>
#include<stdlib.h>

int pontos(long long int valores, int cir, long long int *raio) {
    int ini = 1;
    int fim = cir;
    int meio = 0;

    if(valores>raio[cir]) {
        return 0;
    }
    while(ini<fim) {
        meio = (ini+fim)/2;
        if(raio[meio] >= valores) {
            fim = meio;
        } else {
            ini = meio + 1;
        }
    }
    return cir+1-fim;
} 

int main() {

    int circulo, tiros;
    long long int r[10000000];
    long long int x,y,p = 0;
    int *n, *m;

    scanf("%d %d", &circulo, &tiros);

    n = malloc(circulo*sizeof(int));
    m = malloc(tiros*sizeof(int));

    for(int i = 1; i <= circulo; i++) {
        scanf("%lld", &r[i]);
        r[i] = r[i]*r[i];
    }

    for(int i = 1; i <= tiros; i++) {
        scanf("%lld %lld", &x, &y);
        p += pontos((x*x+y*y), circulo, r);
    }

    printf("%lld\n", p);
    return 0;
}