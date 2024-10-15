/* 5) Um programador construiu o seguinte código e esperava na saída o texto gostinho, mas não
 obteve essa saída. Justifique o porquê de não ter obtido o resultado esperado.
*/
 #include <string.h>
 #include <stdio.h>
 #include <stdlib.h>
 void funcao(char** str){
    //str++;
    (*str)++;//Utilização de ponteiro
 }
 int main(){
    char *str = (void *)malloc(50*sizeof(char));
    strcpy(str, "Agostinho");
    funcao(&str);
    //str++; Outra forma de corrigir(e retirando a função "funcao")
    puts(str);
    free(str);
 return 0;
 }

 /*A saída de texto resulta em 'Agostinho' pois ao usar o str++ a intenção é de que ao deslocar o endereço de memória em uma posição
 ele aponte para onde está armazenado o 'g', imprimindo então apenas 'gostinho', mas essa função ao não utilizar o ponteiro, acaba por
 alterar o endereço de memória do 'str' apenas localmente, sendo assim não acontecerá nada na função original 'main'. Para corrigir isso
 é possível primeiramente apagar a função 'funcao' e adicionar o 'str++' na função main, ou então corrigir a função 'funçao' utilizando ponteiro
 de ponteiro -> (*str)++;
 */
