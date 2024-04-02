//17. Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria
//função de ordenação, mas que seja capaz de ordenar apenas inteiros do tipo int. Para isso, sua
//função deverá receber, entre outros argumentos, um ponteiro para a função de comparação
//que determinará como os elementos do array serão ordenados.

//Ordenação decrescente de inteiros.
//Utiliza como base os 2 exemplos anteriores.

#include <stdio.h>
#include <stdlib.h>

int compara(const void *p1, const void *p2){
    if (*(int*)p1 == *(int*)p2){
        return 0;
    }
    else{
        if (*(int*)p1 >  *(int*)p2) {
            return -1;
        }
        else{
            return 1;
        }    
        }
    }

int main(){
    int n, i;

    int *valores;

    printf("Quantos valores inteiros serao recebidos?");

    scanf("%d", &n);

    valores = malloc(n * sizeof(int));

    printf("Digite %d valores(inteiros):\n", n);
    for (i = 0; i < n; i++) {
        if(i == (n-1)){
            printf("Digite o ultimo valor:\n");
        }
        scanf("%d", &valores[i]);
    }
    qsort (valores, n, sizeof(int), compara);

    printf("Valores ordenados em ordem decrescente: \n");

    for (int i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }
    
    free(valores);

    return 0;
}