#include <stdio.h>
#include <stdlib.h>
#include "copian.h"
int main(){
    int n1=0;
    char v[20];
    char j[20];
    printf("Digite uma palavra de ate 20 letras:\n");
    scanf("%s",v);
    printf("Digite quantas letras voce quer levar para o outro vetor:\n");
    scanf("%d",&n1);
    copian(v,j,n1);
    printf("Palavra levada em J: %s",j);
    return 0;
}