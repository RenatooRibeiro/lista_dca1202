//Q15.Implemente em linguagem C uma função em um programa de computador que leia n valores do
//tipo float e os apresente em ordem crescente. Utilize alocação dinâmica de memória para
//realizar a tarefa.
 

#include <stdio.h>
#include <stdlib.h>

int compara(const void *a, const void *b){
    if (*(float*)a == *(float*)b){
        return 0;
    }
    else{
        if (*(int*)a < *(int*)b) {
            return -1;
            }
        else{
            return 1;
        }    
        }
    }

int main(){
    int n, i;

    float *valores;

    printf("Quantos valores float serao recebidos?");
    scanf("%d", &n);

    valores = malloc(n * sizeof(float));

    printf("Digite %d valores(float):\n", n);
    for (i = 0; i < n; i++) {
        if(i == (n-1)){
            printf("Digite o ultimo valor:\n");
        }
        scanf("%f", &valores[i]);
    }
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