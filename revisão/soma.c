#include <stdio.h>

int main() {
    // Write C code here
    int num, pares=0, impares=0;
    
    do {
        scanf("%d", &num);

        if(num % 2 == 0) {
            pares += num;
        } else {
            impares += num;
        }
    } while(num != 0);

    printf("%d %d", pares, impares);

    return 0;
}