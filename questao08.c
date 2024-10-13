/* 8). Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o
valor do terceiro elemento do vetor?
◦ *(pulo + 2);
◦ *(pulo + 4);
◦ pulo + 4;
◦ pulo + 2;
*/
#include <stdio.h>

int main(void){
//Criando vetor pulo com 5 elementos    
    int pulo[] = {0,1,2,3,4};

    printf("*(pulo + 2) = %d \n",*(pulo + 2));
//Resultado obtido = 2(Conteúdo presente na terceira posição). Logo referencia o valor do terceiro elemento.

    printf("*(pulo + 4) = %d \n",*(pulo + 4));
//Resultado obtido = 4(Conteúdo presente na quinta posição). Logo não referencia o valor do terceiro elemento.


    printf("pulo + 4 = %d \n",pulo + 4);
//O resultado dará o endereço do quinto elemento. Logo não referencia o valor do terceiro elemento.

    printf("pulo + 2 = %d \n",pulo + 2);
//O resultado será referente à posição correta do vetor(terceiro elemento), entretanto como não utiliza '*' não é fornecido seu 
//conteúdo(valor) e sim o endereço que está armazenado. Logo não referencia o valor do terceiro elemento.

return 0;
}