 //Q3. Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de
 //atribuição são ilegais? Justifique.


->p = &i;-->Legal.

->*q = &j;-->Ilegal, pois '&j' retorna o endereço do inteiro 'j',já o '*q' retornaria o conteúdo.Para que ocorresse corretamente deveria estar declarado
            como no exemplo anterior onde ambos armazenam o endereço da variável 'i'.

->p = &*&i;-->Legal.

->i = (*&)j;-->Ilegal, pois ao colocar entre parênteses a precedência de operadores faz com que seja primeiro realizado o que está dentro dos 
                parênteses. Não é possível realizar simplesmente a operação "*&", já que, não há como fornecer o conteúdo de determinado endereço 
                de memória se ainda não foi fornecida a variável.
                
                
->i = *&j;-->Legal.

->i = *&*&j;-->Legal.

->q = *p;-->Ilegal. 'q' é ponteiro e está recebendo um valor inteiro(o conteúdo do ponteiro p), não sendo possível realizar esta atribuição.
  
->i = (*p)++ + *q-->Legal.