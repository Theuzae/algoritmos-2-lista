#include <stdio.h>
float media(int v[], int n){
    int soma=0;
    for(int i=0;i<n;i++) soma+=v[i];
    return soma/(float)n;
}
int main(){
    int v[10];
    for(int i=0;i<10;i++) scanf("%d",&v[i]);
    printf("Media: %.2f", media(v,10));
    return 0;
}