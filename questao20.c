/* 20) Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
código, explicando o que faz cada uma das linhas*/
 
#include <stdio.h>
#include <stdlib.h>

int compara(const void *p, const void *q){//passa 2 ponteiros vazios com valores fixos, que apontam para 2 elementos que serão comparados
    float a = *(float*)p;  //a e b recebem o conteúdo dos ponteiros e o tipo deles
    float b = *(float*)q;  
    if(a > b){//Caso a seja maior que b retorna 1,caso seja menor retorna -1 e caso seja igual retorna 0. Por padrão do qsort.  
        return 1;  
    }  
    else if(a < b){  
        return -1;  
    }  
    return 0;  
}

int main(){
    int n, i;//tamanho do vetor e contador para for
    float *valores;//Ponteiro para o vetor
    printf("Quantos valores float serao recebidos?");
    scanf("%d", &n);//tamanho do vetor

    valores = malloc(n * sizeof(float));//Alocando memória para o vetor

    printf("Digite %d valores(float):\n", n);

    for (i = 0; i < n; i++) {// Lendo os valores do vetor
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }
    
   //A estrutura base do qsort é -> qsort(array, number, size, function)  
    qsort(valores, n, sizeof(float), compara);//"chama" a função compara

    printf("Valores ordenados: \n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", valores[i]);
    }
    
    free(valores);

    return 0;
}
