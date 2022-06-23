#include <stdio.h>
#include <stdlib.h>
#include "elimina.h"
/*Implemente o  void eliminar(char v [ ], char ch)  que elimina todas as ocorrências do
caractere“ch” no vetor de caracteres “v”. Ao eliminar um caractere, os outros elementos do vetor
devem ser movidos para esquerda. Por exemplo: v = “programacao de computadores” e ch = 'a'. Ao
final do procedimento o conteúdo de “v” deverá ser “progrmco de computadores”. Você não pode
utilizar um vetor auxiliar para implementar o procedimento.*/
//NÃO FUNCIONA AINDA...
int main(){
    char v[30];
    char ch='a';
    printf("Digite uma palavra:\n");
    gets(v);
    elimina(v,ch);
    printf("%s",v);

    return 0;
}