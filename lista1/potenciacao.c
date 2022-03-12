#include<stdio.h>
/*
Regras para que dê certo o programinha aqui de potência:

1 -> Usar recursão e não pode ter laços 
2 -> Resultado = N° real
3 -> Se a = 0 e B <= 0, logo "indefinido"

*/

long int potenciacao(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * potenciacao(a, b-1);
    }
}

int main() {

    int a, b;
    float resul, resul2;

    scanf("%d %d", &a, &b);

    if (a == 0 && b <= 0) {
        printf("Indefinido\n");
    } else if (b < 0){
        resul = (potenciacao(a, -1*b));
        resul2 = 1/resul;
        printf("%f", resul2);
    } else {
        resul = potenciacao(a, b);
        printf("%f", resul);
    }
    
    return 0;       
}