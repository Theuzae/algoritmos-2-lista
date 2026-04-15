#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int v[n], p[n], im[n];
    int cp=0, cim=0;
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
        if(v[i]%2==0) p[cp++]=v[i];
        else im[cim++]=v[i];
    }
    for(int i=0;i<cp;i++) printf("%d ",p[i]);
    printf("\n");
    for(int i=0;i<cim;i++) printf("%d ",im[i]);
    return 0;
}