#include <stdio.h>
#include <stdlib.h>
int main(){
    char v[5]={"Lindao"};
    int i;
    for(i=0;v[i]!='\0';i++){
        printf("%c",v[i]);
    }

    return 0;
}