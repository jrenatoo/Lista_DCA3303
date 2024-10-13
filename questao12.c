/*12. Qual será a saída do seguinte programa
#include <stdio.h>

void main(){
    int const *x = 3;
    printf("%d", ++(*x));
 }
*/
#include <stdio.h>

void main() {
    int const valor = 3;
    int *x = &valor;
    printf("%d\n", ++(*x));  // Incrementa e imprime o valor
}
//O código original não funciona, para corrigir adicionamos um ponteiro para
//inteiro que recebe o valor e realizamos o incremento no ponteiro ao imprimir. Resultando então em 4.