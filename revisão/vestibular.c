#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main() {
    
    // %[^\n]
    int qntQuestoes, certas = 0;
    char gabarito[16], gabaritoUser[16];

    scanf("%d", &qntQuestoes);
    fflush(stdin);
    fgets(gabarito, 10, stdin);
    fflush(stdin);
    fgets(gabaritoUser, 10, stdin);

    for(int i = 0; i < qntQuestoes; i++) {
        if(toupper(gabarito[i]) == toupper(gabaritoUser[i])) {
            certas++;
        }
    }

    printf("%d", certas);

    return 0;
}