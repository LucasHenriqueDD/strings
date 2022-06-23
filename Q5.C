#include <stdio.h>
#include <stdlib.h>
#include "compstring.h"
/*Implemente a função int compara (char string1 [ ], char string2 [ ]) que retorna 1 caso
as strings sejam iguais e 0 caso contrário.
*/
//TA DANDO ERRADO....
int main(){
    char v[5];
    char j[5];
    printf("Digite uma string de 5 Letras\n");
    scanf("%s",v);
    printf("Digite outra string de 5 letras\n");
    scanf("%s",j);
    if(compstring(v,j)==1){
        printf("As strings sao iguais...\n");
    }
    else
        printf("As strings nao sao iguais...\n");

    return 0;
}