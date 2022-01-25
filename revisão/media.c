#include<stdio.h>

int main() {
    int n, nums[1000000], soma=0, media, menores=1;

    scanf("%d", &n);
    // Para digitar a sequência e os números serem somados

    // while(n > 10000 || n < 10) {
    //     scanf("%d", &n);
    // }

    for(int i = 0; i < n; i++) {
        // while(nums[i] > 1000000 || nums[i] < 0) {
        //     scanf("%d", &nums[i]);
        // }
        scanf("%d", &nums[i]);
        soma += nums[i];
    }

    media = (soma / n);

    // Encontrar os números que são maiores que a média
    for (int i = 0; i < n; i++) {
        if(nums[i] > media) {
            printf("%d ", nums[i]);
            menores = 0;
        }
    }

    if(menores) {
        printf("%d", 0);
    }

    return 0;
}