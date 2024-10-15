/*9). Considerando a declaração
int mat[4], *p, x;
quais das seguintes expressões são válidas? Justifique.
 p = mat + 1;
 p = mat++;
 p = ++mat;
 x = (*mat);
*/

#include <stdio.h>

int main(void){
    int mat[4], *p, x;

    p = mat + 1;//Válido e retorna o endereço de mat[1]

    //p = mat++;Inválido-> Apresenta o erro "expression must be a modifiable lvalue".
                //O nome do array é constante(não pode ser incrementado).

    //p = ++mat;Inválido-> Apresenta o erro "expression must be a modifiable lvalue".
                //Ocorre o mesmo que no caso anterior.
   
    x = (*mat);//Válido->Retorna o conteúdo de mat[0]

    return 0;
}
