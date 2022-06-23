void printasobre(char v[],int n1){
    int i;
    for(i=n1;i>=0;i--){
        if(v[i]==' '){
            break;
        }
    }
    for(;i<n1;i++){
        printf("%c",v[i]);
    }

}