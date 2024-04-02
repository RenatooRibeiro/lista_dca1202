//Q21. (ENADE, 2023) Memory leak, ou vazamento de memória, é um problema que ocorre em
//sistemas computacionais quando uma parte da memória, alocada para uma determinada
//operação, não é liberada quando se torna desnecessária. Na linguagem C, esse tipo de problema
//é quase sempre relacionado ao uso incorreto das funções malloc( ) e free( ). Esse erro de
//programação pode levar a falhas no sistema se a memória for completamente consumida. Um
//dos trechos abaixo apresenta um vazamento de memória. Identifique-o e justifique sua
//resposta.


//A)void f( ){
//      void *s;
//      s = malloc(50);
//      free(s);
//  }

//B)int f( ){
//      float *a;
//      return 0;
//  }

//C)int f(char *data){
//      void *s;
//      s = malloc(50);
//      int size = strlen(data);
//      if (size > 50)
//          return(-1);
//      free(s);
//      return 0;
//  }

//D)int *f(int n){
//      int *num = malloc(sizeof(int)*n);
//      return num;
//  }
//  int main(void){
//      int *num;
//      num = f(10);
//      free(num);
//      return 0;
//  }


//A alternativa E que contem vazamento de memória.

//E)void f(int n){
//      char *m = malloc(10); 
//      char *n = malloc(10);
//      free(m);
//n é alocado de erroneamente, pois como pode-se observear na próxima linha de código,
//o ponteiro 'm' recebe o endereço de 'n' fazendo com que o endereço inicial seja "perdido" na memória.
//Então ao liberar o espaço de memória de 'm' e 'n' apenas o endereço de n será liberado, já que, o endereço de m
//foi perdido antes de ser liberado
//      m = n;
//      free(m);
//      free(n);
//  }
