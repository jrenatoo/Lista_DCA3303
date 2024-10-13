/* 26) (ENADE, 2023) Na programação de sistemas embarcados, algumas posições de memória servem
para diferentes propósitos, não apenas para armazenar valores. Em algumas dessas memórias,
cada um os bits possui um significado diferente, sendo necessário manipulá-los
individualmente ou em pequenos grupos. Por isso, o conhecimento da álgebra booliana, bem
como dos operadores utilizados para realizar operações binárias nas linguagens de programação,
é essencial para o desenvolvimento desse tipo de sistema. A partir dessas informações, observe
o código apresentado a seguir, escrito na linguagem C, que faz uso de operações binárias sobre
variáveis inteiras.

Após a chamada desse programa, caso o usuário entre com os valores 10 e 1, nessa ordem, qual
será, exatamente, o valor da saída do programa?c 
*/


#include <stdio.h>

int main(){
    int a, b;
    int x, y, z;

    scanf("%d %d", &a, &b);
//a = 10 -> binário = 1010 
//b = 1  -> binário = 0001
    x = a; y = b; z = a + b;
//x = 1010   y = 0001  z = 11 binário-> 1011
    while (a){
        x = x | b;
        /*Operador OU(OR),retorna 1 se pelo menos um dos bits for 1.1°-> 1010 | 0001 = 1011 -> x = 11     
                                                                    2°-> 1011 | 0010 = 1011 -> x = 11
                                                                    ...
        */

        y = y ^ a;
        /*Operador OU-Exclusivo(XOR), retorna 1 se os bits forem diferentes e 0 se forem iguais ->1° 0001 ^ 1010 -> 1011 -> y = 11
                                                                                                  2° 1011 ^ 0101 -> 1110 -> y = 14
                                                                                                  ...
        */

        z = z & (a+b); 
        /*Operador &(AND), retorna 1 se ambos os bits forem 1, e caso contrário 0->1° 1011 & (10+1) -> 1011 & (11) -> 1011 & 1011 -> 1011 ->11
                                                                                   2° 1011 & (5+2) -> 1011 & (7) -> 1011 & 0111 -> 0011 ->3
                                                                                   ...
        */

        a = a >> 1;
        /*Deslocam-se os bits uma posição à direira 
        1°)1010 -> 0101 -> a = 10 vira a = 5
        2°)0101 -> 0010 -> a = 5 vira a = 2
        ...
        */

        b = b << 1;
        /*Deslocam-se os bits uma posição à esquerda
        1°) 0001 -> 0010 -> a = 1 vira a = 2
        2°) 0010 -> 0100 -> a = 2 vira a = 4
        ...
        */
    }

    printf("%d %d %d\n", x, y, z);

    return 0;
}

//Esse processo ocorre enquanto while(a), ou seja, enquanto a diferente de 0. Caso a==0 acaba o while.

//O valor de saída do programa é exatamente:15 13 0