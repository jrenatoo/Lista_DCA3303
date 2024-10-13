/*28. Considere o exemplo seguinte. Compile-o, execute-o e JUSTIFIQUE, usando os recursos que julgar
necessários, porque o programa imprime o resultado que imprime.*/

 #include <stdio.h>

char *a[] = {"AGOSTINHO", "MEDEIROS", "BRITO", "JUNIOR"};//Cria o array 'a' (char) de ponteiros com 4 elementos
char **b[] = {a + 3, a + 2, a + 1, a};//Cria o array 'b' de ponteiros de ponteiro 'b' que aponta para o array de ponteiros 'a', realizando incrementos
                                      //que farão com que ao invés de 'pegar' o elemento corretamente, ele pegue algumas posições de memória
                                      //depois, ou seja, provavelmente o elemento será impresso 'cortado'.
char ***c = b;//Cria ponteiro de ponteiro de ponteiro que recebe b
int main() {
    printf("%s \n", **++c);//O 1° '*' nos fornece p valor de b[0],O incremento faz com que c não aponte para b[0] e sim para b[1].
                           //O 2° '*' nos fornece p valor de 'a+2'Ou seja irá imprimir a[2] = 'BRITO'

    printf("%s \n", *--*++c + 3);//'*++c' aponta para b[2] = a + 1 ->'--'Decrementa a+1 para 'a' -> '*a' aponta para AGOSTINHO
                                //E ao adicionar +3 ao ponteoro faz com que imprime então a partir do 4° caractere de 'AGOSTINHO'(ponteiro de ponteiro de c aponta para a[0] = AGOSTINHO), ou seja 'STIHNO'.
    
    
    printf("%s \n", *c[-2] + 3);//c[2](Devido incrementos anteriores) e após 'c[-2]' fica c[0] -> c[0] é igual a b[0] que ao desreferenciar é 'a + 3' = 'JUNIOR'.
                                //O +3 assim como no caso anterior fará imprimir apartir do 4° caractere.
                                //Logo imprimirá 'IOR'
                                 
    printf("%s \n", c[-1][-1] + 1);//c[-1] é b[1](estava em b[2]),logo B[1] = a[2](BRITO).
                                   //a[2][-1] resulta em a[1] que é 'MEDEIROS' e por final o 
                                   //'+1' fará com que imprima apartir do segundo caractere, ou seja, 'EDEIROS'.
    return 0;
 }
 //O resultado da saída é BRITO STINHO IOR EDEIROS
