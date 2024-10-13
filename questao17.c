// 17). O que é memory leak? Procure 3 exemplos de programas em C que apresentem memory leak e
//explique o que acontece em cada um deles.

//Memory leak, ou vazamento de memória, é quando o programador aloca memória dinamicamente, como por
//exemplo usando a função malloc e não desaloca essa memória quando ela deixa de ser necessária(função free()). Com isso
//é utilizado memória desnecessariamente que faz com que gradativamente a memória se esgote, gerando então
//um programa que desempenhe menos do que um que esteja corretamente alocado e liberado.

/*

//1. Exemplo simples de memory leak. Sem liberação de mmemória.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *x, i;
    x = malloc(10*sizeof(int));
    x[0] = 2;
    for(i = 0; i<10; i++){
        x[i] = i+1;
        printf("%d", x[i]);
    }
    //Realiza a aloação dinâmica de memória, entretanto não realiza o 'free(x)' para liberar a memória.
    return 0;
}

//2. Memory leak em um loop infinito.
#include <stdio.h>
#include <stdlib.h>

int main(){
    while (1) {
        int *p = (int *)malloc(sizeof(int));
        // Não libera a memória alocada e consequentemente a cada repetição será utilizado mais endereços de armazenamento até que se esgote.
    }
    return 0;
}


//3. Memory leak em um loop.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p, i;
    for (i = 0; i < 10; i++) {
        p = (int *)malloc(sizeof(int));
        // Não libera a memória alocada dentro do loop, onde deveria haver free(p).
    }
    return 0;
}
*/