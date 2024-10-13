// 1. Seja o seguinte trecho de programa:

#include <stdio.h>
//cria função main(principal)
int main(void){
    //fornece valores para os inteiros i e j
    int i=3,j=5;
    //indica que  p e q são ponteiros para int(indicam o que contem em determinado endereco)
    int *p, *q;
    //p e q armazenam o endereço que i e j estao guardados
    p = &i;
    q = &j;
    
}

//--> p == &i; O resultado será verdadeiro(true/1).
// p(p=&i) recebe o endereço de i por meio do &, que é o mesmo que &i;

//--> *p - *q;
//o resultado é -2.
//'*' é o operador de dereferênciação, ou seja, em ambos os casos fornecem o conteúdo que está contido na variável.
//Neste caso *p - *q => 3 - 5 => 0

//--> **&p;
//o resultado é 3.
//Nessa linha ocorrem três operadores, primeiramente o '&' apresenta onde o p está armazenado
//o primeiro '*' apresenta o conteúdo do endereço que p está(neste caso &i)
//o segundo '*' apresenta o conteúdo de '&i' que é o inteiro 3.

//--> 3 - *p/(*q) + 7;
//Utiliza os '*' para apresentar os valores de p e q(3 e 5)
//Substituindo obtem-se: 3-3/5+7,utilizando os precedentes de operação realiza primeiro a divisão
//Matematicamente o resultado é 0,6 entretanto por se tratar de variáveis do tipo int fica apenas 0
//3-0+7 = 10. Logo o resultado será 10.