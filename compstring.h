int compstring(char v[],char j[]){
    int i,problema=0;
    int a=0,b=0;
    for(i=0;v[i]!='\0' && j[i]!='\0';i++){
        a=v[i];
        b=j[i];
        if(a==b)
        problema++;
}
    if(problema!=0){
        return 0;
    }
    if(problema==0){
        return 1;
    }
}