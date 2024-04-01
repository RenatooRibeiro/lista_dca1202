//Q9. Qual será a saída do seguinte programa

//O código possuí alguns erros, logo não pode ser compilado e consequentemente não pode ser executado.

#include <stdio.h>

struct teste{
    int x = 3; //Já atribui o valor de x
    char nome[] = "jose";//Declara inicialmente como 'nome' mas no printf é utilizado 'name'
};

main(){
    struct teste *s;//Ponteiro s não declarado anteriormente
    printf("%d", s->x);
    printf("%s", s->name);
}


