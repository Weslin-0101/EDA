#include<stdio.h>

int main() {
    
    int x;

    while(1) {
        scanf("%d", &x);

        if(x == EOF) { break; }
    }

    printf(x);

    return 0;
}