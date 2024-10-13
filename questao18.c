/* 18). O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e
escreva um pequeno programa exemplificando o uso deste recurso. Explique seu programa,
comentando cada uma das linhas de código.

Assim como existem ponteiros que apontam para área de dados, eles também podem desempenhar
o papel de apontar para funções. Ou seja irá armazenar onde as funções ficam na memória virtual, permitindo então
utilizar a função através de ponteiros podendo então passar a função como argumento para outras funções.

Um pequeno exemplo que demostra seu uso é:
*/
 
#include <stdio.h>
#include <stdlib.h>

//cria a primeira função que retorna um inteiro e recebe o inteiro a
int funcao (int a){
    //realiza a função de incrementar em 1 o inteiro a e retornar
    return a+1;
}
//cria a função principal
int main (void){
    //int = tipo de retorno; (*pf) = nome da variável,que neste caso é ponteiro de função; o tipo do parâmetro a ser passado. Ou seja a estrutura do ponteiro para a função.
    //Recebendo o endereço da função.
    int (*pf) (int) = &funcao;
    //Fornecendo o valor do parâmetro que será passado  e imprimindo o resultado 2
    printf("Valor = %d", pf(1));
}