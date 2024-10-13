//14) Justifique porque a saída do seguinte programa é mostrado o valor 22

#include <stdio.h>
//int a = c, *pb = b **ppc = a
int f(int a, int *pb, int **ppc) {
    int b, c;
    **ppc += 1;//incremento de **ppc, que aponta para c. 5 -> 6
    c = **ppc;
    *pb += 2; //é basicamente o mesmo que **ppc, logo incrementa c também. 6 -> 8.
    b = *pb;
    a += 3;//a recebe na chamada da função o valor de c, e também faz incrementação. 5 -> 8
    //o que faz 'a' não incrementar de 8 para 11 de maneira semelhante ao que ocorre em **ppc e *pb
    //é o fato que os 2 primeiros casos alteram o valor na variável global 'c' e depois atribuem esses valores
    //às variáveis locais(c,b), já a apenas recebe o valor da chamada da função e apenas incrementa o valor na variável local.
    return a + b + c;
    //logo: a = 8 + b = 8 + c = 6 -> 22
 }

void main() {
    //declara o valor inteiro c e seu valor, após isso também declara
    //o ponteiro que recebe o endereço de c , e ponteiro de ponteiro que recebe o endereço do ponteiro anterior
    int c, *b, **a;
    c = 5;
    b = &c;
    a = &b;
    printf("%d\n", f(c, b, a));
    //imprime chamando a função f
    getchar();
 }