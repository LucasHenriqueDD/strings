#include <stdio.h>
#include <stdlib.h>
#define tam 20
#include "contachar.h"
/*Implemente uma função que conta e retorna a quantidade de caracteres existente em um
string passado como parâmetro.*/
int main(){
    char v[tam];
    printf("Digite uma palavra de ate 20 letras:\n");
    scanf("%s",v);
    printf("Numero de letras: %d",contachar(v));
    return 0;
}