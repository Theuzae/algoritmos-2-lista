#include <stdio.h>
int main(){
    int n, d, cont[10]={0};
    scanf("%d",&n);
    while(n!=0){
        d=n%10;
        cont[d]++;
        n/=10;
    }
    for(int i=0;i<10;i++) printf("%d=%d ",i,cont[i]);
    return 0;
}