void ordem(char v[]){
    int i,k=0;
    char aux;
    for(i=0;v[i]!='\0';i++){
       for(k=i+1;v[k]!='\0';k++){
            if(v[i]>v[k]){
                aux=v[i];
                v[i]=v[k];
                v[k]=aux;
            }
       }

        
    }
}