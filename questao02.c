/* 2)Mostre o que será impresso por programa supondo que a variável i
ocupa o endereço 4094 na
//memória e que nessa arquitetura os inteiros possuem 2 bytes de tamanho.*/

#include <stdio.h>

int main(void){
    int i=5, *p;
    p = &i;
    printf("%p %p %d %d %d %d \n", p, p+1, *p+2, **&p, 3**p, **&p+4);
}

//Será impresso 4094 4096 7 5 15 9.

//-->p imprime o indereço de p; p+1 é o próximo endereço, e nessa arquitetua os inteiros possuem 2 bytes de memória, logo p ocupa
//os endereços 4094 e 4095, ou seja p+1 estará no endereço 4096;
//-->*p+2 resulta em 7 pois o '*'  apresenta o conteúdo que está contido no endereço de i, somado a 2;
//-->**&p o ponteiro da direita está derefenciando o '&p', ou seja, retorna o conteúdo do endereço e o segundo '*' indica o conteúdo de 'i' que é 5;
//-->3**p = 15.Pois os dois '*' desempenham funções diferentes, um retorna o conteúdo da variável e o outro é um operador de multiplicação(neste caso 3*5)
//**&p+4 = 9. '**&p' é o mesmo que ocorre no quarto argumento do printf, porém somado a 4.