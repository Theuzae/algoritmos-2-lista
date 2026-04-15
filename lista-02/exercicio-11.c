#include <stdio.h>
int main(){
    char s[100];
    fgets(s,100,stdin);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='A') s[i]='4';
        else if(s[i]=='e'||s[i]=='E') s[i]='3';
        else if(s[i]=='i'||s[i]=='I') s[i]='1';
        else if(s[i]=='o'||s[i]=='O') s[i]='0';
    }
    printf("%s",s);
    return 0;
}