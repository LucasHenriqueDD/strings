#include <stdio.h>
#include <stdlib.h>
#include "contachar.h"
#define tam 20
/*Implemente o procedimento “void concatenar (char s1[], char s2[])” que copia o string
s2 a partir do final de s1. Exemplo: s1 = “abc”, s2= “def”, após o procedimento concatenar s1 terá
o conteúdo s1= “abcdef”. */
int main(){
    int a=0,b=0;
    int i=0,d;
    char v[tam];
    char j[tam];
    printf("Digite uma palavra:\n");
    scanf("%s",v);
    printf("Digite outra palavra:\n");
    scanf("%s",j);
    a=contachar(v);
    b=contachar(j);
    for(i=a,d=0;i<=b+a;i++,d++){
        if(i==a+b){
            v[i]='\0';
        }
        v[i]=j[d];
        }
    
    printf("Palavra concatenada: %s",v);

    return 0;
}