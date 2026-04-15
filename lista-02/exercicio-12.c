#include <stdio.h>
int main(){
    char s[100];
    int t=0;
    fgets(s,100,stdin);
    while(s[t]!='\0') t++;
    printf("%d",t-1);
    return 0;
}