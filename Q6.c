#include <stdio.h>
#include <stdlib.h>
#include "contachar.h"
#include "printasobre.h"
/*Implemente o procedimento  void imprime_sobrenome (char nome_completo[ ])  que
recebe o nome completo de uma pessoa e imprime o último nome. Por exemplo, para o nome
completo “Jose Maria da Silva”, o programa deve exibir: “Silva” */
int main(){
    int a=0;
    char v[50];
    printf("Digite um nome completo:\n");
    gets(v);
    a=contachar(v);
    printasobre(v,a);
    return 0;
}