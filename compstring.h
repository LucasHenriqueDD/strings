int compstring(char v[],char j[]){
    int i,k,lv=0,lj=0,p,controle=0;
    for(i=0;v[i]!='\0';i++);
    lv=i;
    for(k=0;j[k]!='\0';k++);
    lj=k;
    if(lv!=lj){
        return 0;
    }
    for(p=0;p<lv;p++){
        if(v[p]==j[p]){
            controle++;
        }    
    }
    if(controle==lv){
        return 1;
    }
   }