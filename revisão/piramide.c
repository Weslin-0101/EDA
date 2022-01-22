#include<stdio.h>

int main() {
    int linhas;

    scanf("%d", &linhas);
    printf("\n");

    for(int i = 1; i <= linhas; ++i) {
        
        for(int j = 1; j <= i; ++j) {
            printf("%.2d ", i);
        }
        
        printf("\n");
    }

    printf("\n");
    
    for(int i = 1; i <= linhas; ++i) {
        
        for(int j = 1; j <= i; ++j) {
            printf("%.2d ", j);
        }
        
        printf("\n");
    }

    return 0;
}