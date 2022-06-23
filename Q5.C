#include <stdio.h>
#include <stdlib.h>
#include "compstring.h"
/*Implemente a função int compara (char string1 [ ], char string2 [ ]) que retorna 1 caso
as strings sejam iguais e 0 caso contrário.
*/
int main(){
    char v[20];
    char j[20];
    printf("Digite uma string de ate 20 Letras\n");
    scanf("%s",v);
    printf("Digite outra string de ate 20 letras\n");
    scanf("%s",j);
    if(compstring(v,j)==1){
        printf("As strings sao iguais...\n");
    }
    else
        printf("As strings nao sao iguais...\n");

    return 0;
}