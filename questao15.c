// 15) O que será mostrado na tela pelo seguinte programa? Justifique sua resposta.

#include <stdio.h>

int main(){
    unsigned int x[4][3] = {{1, 2, 3}, {4, 5, 6},{7, 8, 9}, {10, 11, 12}};
    printf("%u, %u, %u", x+3, *(x+3), *(x+2)+3);
}
//É mostrado 6422292, 6422292, 6422292.
//pois x+3, *(x+3), *(x+2)+3 fornecem o mesmo resultado, mesmo que escritos de maneira diferente;
//x+3 é o mesmo que x[3], endereço do primeiro elemento da quarta linha;
//*(x+3): Isso é o mesmo que x[3]
//x[i][j] -> i fornece o salto em linhas(grupos) e [j] forec e o salto em colunas(individual).
//*(*(x+2)+3) é equivalente a x[2][3]. Já esse não pega o endereço da quarta linha, pega da terceira.E deveria pegar um elemento
//da quarta coluna, entretanto são apenas 3 elementos por linha. Por isso apresenta o endereço do que em tese estaria nessa posição no endereço de memória, que nesse caso já é a quarta linha.
