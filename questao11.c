/* 11). Um programador pretendia armazenar em um struct (acessível através de um ponteiro) o nome
 de um usuário e um valor inteiro associado e preparou o seguinte programa. Há algum erro
 presente no código? Se sim, qual é ele e como pode ser corrigido?

#include <stdio.h> 

struct teste{
    int x = 3;
    char nome[] = "jose";
 };

main(){
    struct teste *s;
    printf("%d", s->x);
    printf("%s", s->nome);
}
*/

#include <stdio.h>
#include <stdlib.h>

//o struct é apenas uma estrutua base, os valores etc devem ser passados na função principal para cada caso.
struct teste {
    int x;
    char nome[100];//fornece tamanho do array
};

int main() {
    struct teste *s;
    
    s->x = 3;//Atribui o inteiro 3 ao x do struct(semelhante a (*s).x)

    //Não é possível attribuir 'jose' diretamente a um array já declarado.
    //Por isso atribuí o nome caractere por caractere em cada elemento do array.
    s->nome[0] = 'j';
    s->nome[1] = 'o';
    s->nome[2] = 's'; 
    s->nome[3] = 'e';
    s->nome[4] = '\0';

    
    printf("%d\n", s->x);//Imprime o valor de x->3
    printf("%s\n", s->nome);//Imprime o valor de nome ->jose

    return 0;
}