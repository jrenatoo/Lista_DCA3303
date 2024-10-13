 /* 4)Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se
 foram obtidas as respostas esperadas, justificando o porque de cada uma).*/
 #include <stdio.h>
 
 int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;


 /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("a: %d \n", valor);
//Foi obtido o valor esperado(20), o inteiro 'valor' recebe 10 -> p1 recebe o endereço de 'valor' -> o ponteiro de p1 indica que
//o conteúdo presente em 'valor' recebe 20, armazenando então na memória o valor da variável de tipo int de 10 para 20.


 /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("b: %.1f \n", temp);
//De maneira semelhante ao o que ocorre no exemplo anterior foi obtido o valor esperado(29.0), o float 'temp' recebe 26.5 ->
//p2 recebe o endereço de 'temp'-> o ponteiro de p2 indica que o conteúdo presente em 'temp' recebe 29.0.
//Armazenando então na memória o valor da variável de tipo float de 26.5 para 29.0;


 /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("c: %c \n", aux);
//Será mostrado 'P',a primeira letra da variável atribuída ao char nome = 'Ponteiros';
//p3 recebe o endereço(&) do primeiro caractere(posição[0]) de 'Ponteiros' que é 'P';
//a variável auxiliar(aux) recebe o conteúdo de p3(P) e o print imprime-a.


/* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("d: %c \n", aux);
//Ocorre o mesmo que no exemplo anterior, entretanto na recebendo o quinto caractere(posição[4]) de 'Ponteiros';
//Sendo então imprimido 'e'.


  /* (e) */
  p3 = nome;
  printf("e: %c \n", *p3);
//O resultado obtido é 'P'. Por não conter indíces, em C é utilizado o primeiro caractere da string nome que é "Ponteiros"
//Neste caso não é utilizada a variável auxiliar,ao desreferenciar 'p3' com '*p3' no printf, você obtém o valor que é o primeiro caractere ‘P’.


  /* (f) */
  p3 = p3 + 4;
  printf("f: %c \n", *p3);
//É obtido 'e'.No exemplo anterior p3 recebe a varável nome e neste é somado 4, fazendo então com que seja armazenado o quinto caractere
//da palavra 'Ponteiros' que é 'e', realizando a mesma função que ocorre no exemplo (d), porém realizado de maneira distinta. Ao invés de
//utilizar o '&'e '[4]' que fornecem o quinto endereço, é feito de maneira direta.


  /* (g) */
  p3--;
  printf("g: %c \n", *p3);
//É impresso 't', pois o operador (--) subtrai 1 unidade. Neste caso em específico está fazendo com que seja utilizada o caractere 
//de um endereço anterior, decrementando para que seja apontado o quarto endereço.


  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("h: %d \n", idade);
//O ponteiro de p4 está apontando para a primeira posição do vetor, que é vetor[0]. Foi atribuída a esta posição o inteiro 31.
//Logo ao ser executado teremos obtido '31'.
//


  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("i: %d \n", idade);
//Ao analisar primeiramente a expressão p4 + 1 é recebido o inteiro da segunda posição do vetor, que é '45'. Sendo então atribuído à p5. 
//A variável auxiliar idade do tipo int recebe então o ponteiro de p5 que irá imprimir o conteúdo '45'.

  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("j: %d \n", idade);
//p4 receberá o valor contido na segunda posição de p5, que anteriormente havia recebido a segunda posição de p4, então o que será impresso
//é o que originariamente estava localizada na terceira posição de p4. Logo será impresso vetor[2], ou seja '27'.


  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("l: %d \n", idade);
//Ao utilizar o (- 2) p4 irá decrementar 2 posições do vetor, retornando novamente para a primeira posição vetor[0]
//Sendo então apresentado o resultado '31'.


  /* (m) */
  p5 = &vetor[2] - 1;
  printf("m: %d \n", *p5);
//P5 recebe a posição 3 do vetor menos 1, Logo será impresso a posição 2 do vetor, o inteiro '45'.


  /* (n) */
  p5++;
  printf("n: %d \n", *p5);
  return(0);
//Utiliza a posição recebida por p5 no exemplo anterior e encrementa uma posição, obtendo então o vetor[2]. 
//Sendo impresso o inteiro '27'.
}