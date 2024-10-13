/* 23). Escreva uma função em linguagem C que escreva em um vetor a soma dos elementos
correspondentes de outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo
usuário). Por exemplo, se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor
contiver os elementos 3, 5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A
função deve receber 4 argumentos: os nomes dos três vetores e o número de elementos
presentes em cada vetor. Exemplo:
soma_vetores(vet1, vet2, resultado, 4);
*/

#include <stdio.h>

// Função para somar os elementos de dois vetores e armazenar o resultado em um terceiro vetor
void soma(int vetor_1[], int vetor_2[], int resultado[], int n) {
    for (int i = 0; i < n; i++) {
        resultado[i] = vetor_1[i] + vetor_2[i];
    }
}

//Função principal
int main() {
    //Declara o inteiro n que receberá a quantidade de elementos dos vetores.
    int n; 
    printf("Quantos elementos terao os vetores? ");
    //Recebe a quantidade de elementos
    scanf("%d", &n);

    //Vamos declarar 3 vetores. Os dois primeiros serão os arrays responsáveis por receberem
    //cada um os elementos fornecidos pelo usuário e o terceiro será a soma entre cada  um dos termos.
    int vetor_1[n], vetor_2[n], resultado[n];

    //Atribui a cada posição de indice 'i' o elemento fornecido para o primeiro vetor.
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor_1[i]);
    }

    //Atribui a cada posição de indice 'i' o elemento fornecido para o segundo vetor.
    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor_2[i]);
    }

    //Função soma, passando os 4 parametros necessários: os 3 arrays e o número de termos.
    soma(vetor_1, vetor_2, resultado, n);

    //Imprime o vetor resultado utilizando a função for com o contador i
    printf("Resultado da soma:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}