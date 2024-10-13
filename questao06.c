 /* 6) Assumindo que um inteiro tem 4 bytes de tamanho, qual será a saída do seguinte programa?
 Justifique sua resposta.
 */

 #include <stdio.h>

 void funcao(char **p){
    char *t;
    t = (p += sizeof(int))[-1];
    printf("%s\n", t);
 }

 int main(){
    char *a[] = {"ab","cd", "ef", "gh", "ij", "kl"};
    funcao(a);
    return 0;
 }

 /*A saída do programa é 'gh', pois  't = (p += sizeof(int))[-1];' onde t (um ponteiro(t*)) recebe p ((ponteiro de ponteiro(p**)) que recebe '+= sizeof(int)'
 onde será += 4 devido ao tamanho do inteiro, logo (p = 4[-1]) ,ou seja ,t = p = 4 *(p - 1) -> *(p + 3) -> p[3]. Sendo assim esse [-1] fará com que t receba não o valor de
 4 e sim de 3. Consequentemente o termo selecionado do array será o que está na 4ª posição e não 5ª, 'gh'.*/