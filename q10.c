//Q10. Qual será a saída do seguinte programa **Também possuí alguns erros mas ajustando-o ficará:

#include <stdio.h>

void main(){
    //int const *x = 3; ->Faz um ponteiro de um inteiro diretamente(sem ter declarado o inteiro antes e depois criado o ponteiro)
    int numero = 3; //Cria a variável inteiro numero que recebe o valor 3.
    int *p = &numero;//Cria o ponteiro de p que recebe o endereço da variável numero.

    printf("%d", ++(*p));//incrementa o valor de ponteiro de p, resultando em 4.
}

