/*9). Considerando a declaração
int mat[4], *p, x;
quais das seguintes expressões são válidas? Justifique.
p = mat + 1;
p = mat;
x = (*mat);
*/

#include <stdio.h>

int main(void){
    
    int mat[4], *p, x;
    //Declara um vetor de 4 componentes, um ponteiro de p e uma variável x.

    p = mat + 1;
    //O ponteiro recebe o endereço do segundo componente d o vetor mat[], é válido e funciona de maneira semelhante à "&mat[1]".

    p = mat;
    //O ponteiro recebe o endereço do primeiro componente d o vetor mat[], é válido e funciona de maneira semelhante à "&mat[0]".

    x = (*mat);
    //Embora o código esteja certo -recebendo o conteúdo do primeiro componente do vetor mat[4]- ele se torna inválido pelo fato que
    //o vetor mat[4] não teve seus valores declarados, logo não foi inicializado. Assim o código não realiza  a função que deveria, ou seja, é inválido.
    
    return 0;
}