void elimina(char v[],char a){
    int i,k=0;
    for(i=0;v[i]!='\0';i++){
        if(v[i]=='a'){
        	for(k=i;v[k]!='\0';k++){
			v[k]=v[k+1];  
        } 
		}
    }
}