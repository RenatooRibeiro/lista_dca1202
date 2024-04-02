//Q 16. Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu
//código, explicando o que faz cada uma das linhas.

//O programa da questão anterior já foi implementado utilizando qsort(), mas comentando-o:

#include <stdio.h>
//Inclui o cabeçalho stdlib.h, que contem as funções responsáveis pela manipulação da alocação de memória.
#include <stdlib.h>

//Função utilizada pelo qsort() para comparar. Recebe 2 valores constantes
int compara(const void *p1, const void *p2){
    //Se o primeiro número seja igual ao segundo, será retornado 0.
    if (*(float*)p1 == *(float*)p2){
        return 0;
    }
    //Senão for igual a 0, será comparado. Se 'p1' for menor que 'p2' retornará '-1'.
    //Caso 'p1' for maior que 'p2' será retornado '+1'.
    else{
        if (*(float*)p1 < *(float*)p2) {
            return -1;
            }
        else{
            return 1;
        }    
        }
    }
//Cria a função principal
int main(){
    //Declara os inteiros 'n' e 'i'. Que serão respectivamente a quantidade
    //de valores a serem ordenados e um contador
    int n, i;
    //Declara o float ponteiro de valores que irá armazenar os valores
    float *valores;

    printf("Quantos valores float serao recebidos?");
    scanf("%d", &n);

    //Aloca dinamicamente a memória que irá armazenar os valores.
    valores = malloc(n * sizeof(float));
    //Função do tipo for que utiliza o índice para armazenar o valor inserido em cada determinada posição.
    printf("Digite %d valores(float):\n", n);
    for (i = 0; i < n; i++) {
        if(i == (n-1)){
            printf("Digite o ultimo valor:\n");
        }
        scanf("%f", &valores[i]);
    }
    //Utiliza a função qsort()-da biblioteca stdlib.h- passando seus 4 parâmetros necessários.
    //Respectivamente são: Endereço do vetor a ser ordenado(valores), Tamanho do vetor(n),
    //Tamanho em bytes do tipo a ser ordenado(sizeof(float)), e o ponteiro pra função de comparação(compara).
    qsort (valores, n, sizeof(float), compara);

    // Imprime os valores em ordem crescente
    printf("Valores ordenados: \n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", valores[i]);
    }
    printf("\n");

    // Libera a memória alocada dinamicamente
    free(valores);

    return 0;
}