/* 21. Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria
função de ordenação, mas que seja capaz de ordenar apenas inteiros do tipo int. Para isso, sua
função deverá receber, entre outros argumentos, um ponteiro para a função de comparação
que determinará como os elementos do array serão ordenados.*/

//O código funciona da mesma maneira do da questão 29, entretanto separaremos a ordenação do main. 
//para "chamar" a função basta usar ponteiro para função

#include <stdio.h>
#include <stdlib.h>

//Função de ordenação criada anteriormente na questão 19.
void ordenar(int *valores, int n) {
    //inteiros i e j que são utilizados para "varrer" os elementos do array
    int i, j;
    //variável auxiliar que é utilizado para realizar a troca caso esteja desordenado 
    int aux;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (valores[i] > valores[j]) {
                aux = valores[i];
                valores[i] = valores[j];
                valores[j] = aux;
            }
        }
    }
}

int main(){
    int n, i;//tamanho do vetor e contador para for
    int *valores;//Ponteiro para o array
    printf("Quantos valores int serao recebidos?");
    scanf("%d", &n);//tamanho do array

    valores = malloc(n * sizeof(int));//Alocando memória para o array

    printf("Digite %d valores(int):\n", n);

    for (i = 0; i < n; i++) {// Lendo os valores do array
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    
    //Cria o ponteiro para a função de ordenação passando o tipo de retorno, o nome da variável e os parâmetros a serem passados
    //os parametros são ponteiro para inteiro que irá pegar o "conteúdo" dos valores fornecidos e o outro int recebe a quantidade dos valores 
    void (*pf)(int*, int) = ordenar;

    // Chama a função de ordenação usando o ponteiro, fornecendo também os parâmetros necessários
    (*pf)(valores, n);
    
    printf("Valores ordenados: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }
    
    free(valores);

    return 0;
}