#include<stdio.h>

long long int conta7(long long int a) {
    if (a == 0) {
        return 0;
    }
    
    int n = a % 10;
    if (n == 7) {
        return 1 + conta7(a/10);
    }

    return conta7(a/10);
}

int main() {

    long long int n, resul;

    scanf("%lld", &n);
    resul = conta7(n);
    printf("%lld", resul);

    return 0;
}