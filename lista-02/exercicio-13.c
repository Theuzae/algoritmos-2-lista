#include <stdio.h>
int main(){
    char f[100], p[20];
    int i,j,k,ok=0;
    fgets(f,100,stdin);
    scanf("%s",p);
    for(i=0;f[i]!='\0';i++){
        for(j=0,k=i;p[j]!='\0' && f[k]==p[j];j++,k++);
        if(p[j]=='\0'){ ok=1; break;}
    }
    if(ok) printf("Encontrada");
    else printf("Nao encontrada");
    return 0;
}