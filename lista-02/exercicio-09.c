#include <stdio.h>
int main(){
    char s[100];
    scanf("%s",s);
    int i=0,j=0;
    while(s[j]!='\0') j++;
    j--;
    int p=1;
    while(i<j){
        if(s[i]!=s[j]){ p=0; break;}
        i++; j--;
    }
    if(p) printf("Palindromo");
    else printf("Nao eh");
    return 0;
}