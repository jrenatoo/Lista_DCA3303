/* Q13. Seja x um vetor de 4 elementos, declarado da forma TIPO x[4]. Suponha que depois da
declaração, x esteja armazenado no endereço de memória 4092 (ou seja, o endereço de x[0]).
Suponha também que na máquina seja usada uma variável do tipo char ocupa 1 byte, do tipo
int ocupa 2 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes. Quais serão os
valores de x+1, x+2 e x+3 se:
◦ x for declarado como char?
◦ x for declarado como int?
◦ x for declarado como float?
◦ x for declarado como double?
Implemente um programa de computador para testar estas suposições e compare as respostas
oferecidas pelo programa com as respostas que você idealizou.*/

#include <stdio.h>

//Para testar essas suposições vamos criar os vetores de 4 elementos declarando-os respectivamente como cada tipo.

int main(){
    char x_char[4];       
    int x_int[4];                   
    float x_float[4] ;       
    double x_double[4]; 
    int i;

//em seguida para que posssamos observar os resultados, iremos imprimir por meio do printf o endereço de cada um dos termos
    for (int i = 0; i < 4; i++){
        printf("Endereço na memoria de char[%d]= %p\n", i, &x_char[i]);
        printf("Endereço na memoria de int[%d]= %p\n", i, &x_int[i]);
        printf("Endereço na memoria de float[%d]= %p\n", i, &x_float[i]);
        printf("Endereço na memoria de double[%d]= %p\n", i, &x_double[i]);
        printf("\n");
    }   

}

//Com o resultado obtido podemos concluir que como esperado que caso x[0] esteja armazenado em 4092 ocorrerá respectivamente:

//Char: Cada elemento ocupará 1 byte, logo respectivamente cada um dos termos estará armazenado em:4092, 4093, 4094, 4095.

//Int: Cada elemento ocupará 2 bytes, logo respectivamente cada um dos termos estará armazenado em:4092, 4094, 4096, 4098.

//Float: Cada elemento ocupará 4 bytes, logo respectivamente cada um dos termos estará armazenado em:4092, 4096, 4100, 4104.

//Double: Cada elemento ocupará 8 bytes, logo respectivamente cada um dos termos estará armazenado em:4092, 4100, 4108, 4116.







