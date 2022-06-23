void copian(char v[],char j[],int n){
    int i;
    for(i=0;i<=n;i++){
        if(i==n){
            j[i]='\0';
            break;
        }
        j[i]=v[i];
    }
}