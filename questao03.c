/*3. Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de
 atribuição produzem erro de compilação? Justifique.
*/

int main(void){
    int i, j;
    int *p,*q;
    p = &i;
    *q = &j;
    p = &*&i;
    //i = (*&)j; -> Há erro de compilação -> Não faz sentido, pois não ha como o & receber o endereço do inteiro -está dentro do parenteses-  e consequentemente nãop há como o * desreferenciar 
    i = *&j;
    i = *&*&j;
    q = *p;
    i = (*p)++ + *q;
}
//Embora compilem, as expressões: *q = &j; e q = *p; apresentam Warnings(avisos), pois uma 
//atribue um ponteiro a uma variável do tipo inteiro, e a outra realiza o contrário, misturando tipos de dados diferentes. 