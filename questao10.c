//10). O que fazem os seguintes programas em C?

#include <stdio.h>

int main(){
    //Cria um vetor(vet[]) de 3 componentes.
    int vet[] = {4, 9, 13};
    //Cria inteiro 'i' que será usado como contador.
    int i;
    //Função for que será passada 3 vezes e a cada vez o valor de 'i' é incrementado.
    for(i=0;i<3;i++){
        //O printf utiliza-se do contador i para passar por cada um dos vetores individualmmente.
        //Assim a cada vez que o printf aconteça será impresso o conteúdo de determinada posição do vetor através de *(vet+i), ou seja,
        //ponteiro do determinado componente.
        printf("%d ", *(vet+i));
    }
}

int main(){
    int vet[] = {4, 9, 13};
    int i;
    for(i=0;i<3;i++){
        printf("%X ",vet+i);
    }
    //Basicamente esta função funciona da mesma maneira que a função anterior, entretanto por não utilizar o ponteiro'*', não é]
    //retornado o valor do componente do vetor e sim o endereço que ele está localizado na memória. Utiliza o %X para imprimir em Unsigned hexadecimal integer (uppercase).
}
