29. Um usuário precisa implementar o controle de uma matriz de leds com 8 x 8 elementos. Para
isso, ele criou um programa em C dotado de uma matriz da forma
unsigned char m[8][8];
para armazenar os estados dos leds. Como existem apenas dois estados possíveis para os leds
(aceso ou apagado), ele assumiu que leds acessos () seriam denotados pelo inteiro "1" nessa
matriz e leds apagados () seriam denotados pelo inteiro "0". Por exemplo, para a seguinte
matriz de leds:
a matriz m seria codificada da seguinte forma:
Ocorre que a função que controla os leds exige que a informação que controla a matriz seja
enviada via porta serial usando uma função que recebe um único inteiro não sinalizado de
64 bits, da forma send(unsigned long estado). Nesse inteiro, os bytes mais significativos deverão
guardar os estados das linhas iniciais da matriz de leds, enquanto os bytes menos significativos
devem guardar os estados das linhas finais da matriz. Assim, é necessário que cada estado
previsto na matriz m seja codificado em um bit correspondente na variável enviada pela função.
Para a matriz acima, a variável de 64 bits enviada pela função send() deveria ser codificada da
seguinte forma:
0101010110101010010101011010101001010101101010101010101010101010
