/* 16). Suponha que as seguintes declarações tenham sido realizadas:
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;
Identifique quais dos seguintes comandos é válido ou inválido:
aloha[2] = value;
scanf("%f", &aloha);
aloha = "value";
printf("%f", aloha);
coisas[4][4] = aloha[3];
coisas[5] = aloha;
pf = value;
pf = aloha;
*/

#include <stdio.h>

void main(){
    //Declara
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value; //Válido, atribui um valor float à uma posição do array aloha que é composto por floats.
    printf("%f \n", aloha[2]);
    //scanf("%f", &aloha); Inválido, pois  o operador '&' retorna o endereço de armazenamento de um determinado componente e por não especificar 
    //qual dos compoentes do vetor que buscamos receber o endereço ele não é executado de maneira correta.

    //aloha = "value"; Inválido, pois tenta atribuir uma string a um array composto por floats .

    //printf("%f", aloha); Inválido, pois de maneira semelhante ao que ocorre no comando anterior o '%f' espera receber um elemento único e 
    //ao receber uma array de floats sem que esteja especificado qual dos componentes ocorre uma incompatibilidade.

    coisas[4][4] = aloha[3];//Válido, atribui o elemento de quarta posição 'aloha[3]' ao elemento de posição [4][4] do array coisas.
    //e por se tratarem de tipos iguais(float) é executado de maneira correta.
    printf("%f \n", coisas[4][4]);

    //coisas[5] = aloha; Inválido, tenta atribuir um array de floats(aloha) à uma linha do array coisas.

    //pf = value; Inválido, pois tenta atribuir um float à um ponteiro de float, logo há discordância de tipos.

    pf = aloha; //Válido, pois atribui o primeiro componente do vetor de floats 'aloha' a um ponteiro de float. O que ocorrerá
    //é o armazenamento do endereço do primeiro termo de aloha em pf.
    printf("%f \n", *pf);

}