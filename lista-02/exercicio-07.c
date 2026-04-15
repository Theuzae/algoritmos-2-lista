#include <stdio.h>
int main(){
    int v[10], x[10];
    for(int i=0;i<10;i++) scanf("%d",&v[i]);
    for(int i=0;i<10;i++) scanf("%d",&x[i]);
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(v[i]==x[j]) v[i]=0;
        }
    }
    for(int i=0;i<10;i++) printf("%d ",v[i]);
    return 0;
}