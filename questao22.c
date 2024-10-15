/* 22. Procure na internet mecanismos que possibilitem medir tempos de execução de rotinas
 computacionais. Geralmente, estas medidas são realizadas com o auxílio de funções em C que
 lêem a hora no sistema (sistemas Unix e Windows geralmente usam funções diferentes).
 Utilizando os conhecimentos que você obteve com sua pesquisa, meça os tempos de execução
 das implementações que você criou para os dois problemas de ordenação anteriores (com seu
 método de ordenação e com qsort()), considerando apenas arrays de elementos tipo int e
 compare os resultados obtidos. O que se conclui nesse caso?*/

 //utilizaremos a função clock()

#include <stdio.h>
#include <stdlib.h>
#include <time.h>//para utilizar a função clock()
  
//OBS: utilizei um for para repetir o processo de ordenação 100000 vezes.
//para aumentar o tempo total medido, já que não estava sendo possível obter diferença de tempo

//Função da questão 20
int compara(const void *p, const void *q){//passa 2 ponteiros vazios com valores fixos, que apontam para 2 elementos que serão comparados
    int a = *(int*)p;  //a e b recebem o conteúdo dos ponteiros e o tipo deles
    int b = *(int*)q;  
    if(a > b){//Caso a seja maior que b retorna 1,caso seja menor retorna -1 e caso seja igual retorna 0. Por padrão do qsort.  
        return 1;  
    }  
    else if(a < b){  
        return -1;  
    }  
    return 0;  
}
//Função da questão 21
void ordenar(int *valores21, int n) {
    
    int i, j;//inteiros i e j que são utilizados para "varrer" os elementos do array
    int aux;//variável auxiliar que é utilizado para realizar a troca caso esteja desordenado

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (valores21[i] > valores21[j]) {
                aux = valores21[i];
                valores21[i] = valores21[j];
                valores21[j] = aux;
            }
        }
    }
}

int main(){
    int n, i, t = 100000;//tamanho do vetor e contadores para for.
    int *valores20, *valores21;//Ponteiros para inteiro que apontam para os arrays que contém os valores

    clock_t inicio20, fim20, inicio21, fim21; // Variáveis para medir o tempo de execução
    double tempoGasto20, tempoGasto21; // Variáveis para armazenar o tempo gasto

    printf("Quantos valores(int) serao recebidos? ");
    scanf("%d", &n);//Recebe a quantidade de elementos do array

    valores20 = (int*) malloc(n * sizeof(int)); //Aloca memória para o array que será utilizado no primeiro método
    valores21 = (int*) malloc(n * sizeof(int)); //Aloca memória para o array que será utilizado no segundo método
    
    printf("Digite %d valores(int):\n", n); 
    //Recebe os valores do usuário
    for (i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores20[i]);
        valores21[i] = valores20[i];//Copia os valores que já estão no array da questão 20 para a questão 21
    }


    //Medição de tempo da questão 20(qsort)
    inicio20 = clock(); //Marca o início da 'questão 20'
    for (i = 0; i < t; i++){
        qsort(valores20, n, sizeof(int), compara);
    }
    fim20 = clock(); //Marca o fim da 'questão 20'
    tempoGasto20 = ((double) (fim20 - inicio20))/ CLOCKS_PER_SEC;//Calculo do delta tempo e converte clock, é necessário dividir o número total de clocks pelo CLOCKS_PER_SEC para converter o tempo medido em segundos.

    //Medição de tempo da questão 21(metodo implementado)
    inicio21 = clock(); //Marca o início da 'questão 21'
    for (i = 0; i < t; i++){
        ordenar(valores21, n);
    }
    fim21 = clock(); //Marca o fim da 'questão 21'
    tempoGasto21 = ((double) (fim21 - inicio21))/ CLOCKS_PER_SEC;//Calculo do delta tempo

    printf("Tempo de execução do qSort: %f segundos\n", tempoGasto20);//Imprime o delta tempo da função criada
    printf("Tempo de execução do método implementado: %f segundos\n", tempoGasto21);//Imprime o delta tempo da função qsort

    // Libera a memória
    free(valores20);
    free(valores21);

    return 0;

}

//Observa-se com os resultados que com pequenas quantidades de elementos ambos se saem relativamente bem,
//entretanto em arrays maiores o fato do método implementado ter que percorrer o array varias vezes o prejudica.
//Sendo assim o qsort torna-se mais eficiente e mais rápido.