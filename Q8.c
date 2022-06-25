#include <stdio.h>
#include <stdlib.h>
#include "ordem.h"
/*19)  Implemente um procedimento que coloca em ordem crescente os caracteres de um string
“s” passado como parâmetro.*/
int main(){
    char v[30];
    printf("Digite uma string qualquer:\n");
    gets(v);
    ordem(v);
    printf("A string em ordem: %s",v);

    return 0;
}