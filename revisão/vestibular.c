#include<stdio.h>

int main() {
    
    // %[^\n]
    int qntQuestoes, certas = 0;
    char gabarito[16], gabaritoUser[16];

    scanf("%d", &qntQuestoes);
    scanf(" %s", gabarito);
    scanf(" %s", gabaritoUser);

    for(int i = 0; i < qntQuestoes; i++) {
        if(gabarito[i] == gabaritoUser[i]) {
            certas++;
        }
    }

    printf("%d", certas);

    return 0;
}