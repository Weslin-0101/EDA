#include<stdio.h>

struct tipoData {
    int dia;
    int mes;
    int ano;
};

struct tipoPessoa {
    char nome[80];
    struct tipoData dtNascimento;
};

// NÃO FAÇO IDEIA MAIS DO QUE FAZEEEEEEEEEERRR

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento) {
    struct tipoPessoa r;
    
    for(int i = 0; i < 80; i++) {
        r.nome[i] = nome[i];
    }

    r.dtNascimento.dia = dt_nascimento % 100;
    dt_nascimento = dt_nascimento / 100;

    r.dtNascimento.mes = dt_nascimento % 100;
    dt_nascimento =  dt_nascimento / 100;

    r.dtNascimento.ano = dt_nascimento;

    return r;
}

int main() {

    separaInfo("Wesley", 20011023);

    return 0;
}