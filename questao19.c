//Q19.Implemente em linguagem C uma função em um programa de computador que leia n valores do
//tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
//realizar a tarefa.
 

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j;//tamanho do vetor e contador para for
    float *valores;//Ponteiro para o vetor
    float aux;//
    printf("Quantos valores float serao recebidos?");
    scanf("%d", &n);//tamanho do vetor

    valores = malloc(n * sizeof(float));//Alocando memória para o vetor

    printf("Digite %d valores(float):\n", n);

    for (i = 0; i < n; i++) {// Lendo os valores do vetor
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }
    
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (valores[i] > valores[j]){//compara o vetor i com o próximo(j = i+1)
                aux = valores[i];//se for maior é porque está desordenado, usa um auxiliar para trocar as posições
                valores[i] = valores[j];
                valores[j] = aux;
            }
        }
    }

    printf("Valores ordenados: \n");

    for (int i = 0; i < n; i++) {
        printf("%.2f ", valores[i]);
    }
    
    free(valores);

    return 0;
}