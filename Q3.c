#include <stdio.h>
#include <stdlib.h>
#include "copia.h"
/*Implemente o procedimento void copia (char origem [ ], char destino [ ]) que faz uma
cópia do vetor origem no vetor destino*/
int main(){
    char v[7];
    printf("Digite uma palavra ate 7 letras:\n");
    scanf("%s",v);
    char j[10];
    copia(v,j);
    printf("Palavra repassada a outro vetor: %s",j);

    return 0;
}