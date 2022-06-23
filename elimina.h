void elimina(char v[],char ch){
    int i;
    for(i=0;v[i]!='\0';i++){
        if(v[i]==ch){
            v[i]='00';
        }
    }
}