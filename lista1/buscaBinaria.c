#include <stdio.h>
#include <stdlib.h>

long int binario(int *v, int x, int n) { 
    int elem = -1, d = n;
    
    while (elem < d-1) {  
        int m = (elem + d)/2;
        if (v[m] < x) 
            elem = m;
        else 
            d = m; 
    }
    
    return d;
}

int main(){
    long int numN, numM, i = 0, j = 0, k = 0;
    int *n, *m; 
    long int resposta;

    scanf("%ld %ld", &numN, &numM);

    n = malloc(numN*sizeof(int));
    m = malloc(numM*sizeof(int));

    for(i = 0; i < numN; i++){
        scanf("%ld", &n[i]);
    }
    for(i = 0; i < numM; i++){
        scanf("%ld", &m[i]);
    }

    for(i = 0; i < numM; i++){
        if(m[i] == 0){
            resposta = 0;
            printf("%ld\n", resposta);
        }else{
            resposta = binario(n, m[i], numN);
            printf("%ld\n", resposta);
        }
    }

    free(n);
    free(m);

    return 0;
}