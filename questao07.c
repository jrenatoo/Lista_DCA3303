/* 7). Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e explique se
foram obtidas as respostas esperadas).*/


#include <stdio.h>

int main(void) {
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco\n");
    for (i = 0; i <= 4; i++) {
        printf("i = %d", i);
        printf(" vet[%d] = %.1f", i, vet[i]);
        printf(" *(f + %d) = %.1f", i, *(f + i));
        printf(" &vet[%d] = %X", i, &vet[i]);
        printf(" (f + %d) = %X", i, f + i);
        printf("\n");
    }
    return 0;
}

/*É obtido:
contador/valor/valor/endereco/endereco
i = 0 vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = 61FF04 (f + 0) = 61FF04
i = 1 vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = 61FF08 (f + 1) = 61FF08
i = 2 vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = 61FF0C (f + 2) = 61FF0C
i = 3 vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = 61FF10 (f + 3) = 61FF10
i = 4 vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = 61FF14 (f + 4) = 61FF14


Foram obtidas as respostas esperadas de acordo com o que o programa faz, primeiro é declarado uma array float com 5 componentes de tipo float,
um float ponteiro de f que receberá o vetor, e um inteiro i que servirá como contador no programa.
A função for utiliza o contador para passar por 5 vezes os printf's a serem realizados alterando os seus índices com o próprio 'i' sendo incrementado(i++).


Explicando que cada linha de printf realiza:

1:Imprime o valor do contador i;

2:Imprime primeiramente o indíce do vetor e o conteúdo que está contido nessa determinada posição;

3:Também imprime o valor do conteúdo em determinada posição do array, entretanto faz isto de outro modo, utiliza o ponteiro de f
 + o contador i para apontar qual posição do vetor será impressa, por exemplo A posição *(f + 1) irá imprimir o vetor de segunda posição='2.2';

4:Utiliza o operador '&' para retornar o endereço em que o vetor de posição[i] está armazenado na memória;

5:Realiza a mesma função do printf anterior, retorna o endereço de armazenamento de determinado componente do vetor. Porém realiza isto
de maneira diferente, utiliza-se de (f + 1) igual ocorre no terceiro printf, mas por não utilizar o 'ponteiro de (*)' não é obtido o conteúdo 
e  sim o endereço;

6: Realiza uma quebra de linha e logo após retorna para o início enquanto o contador for menor igual que 4. 
*/