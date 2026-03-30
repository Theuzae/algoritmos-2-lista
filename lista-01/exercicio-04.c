/* Aluno: Matheus Mendes
Exercicio 4 - "Olá [nome]".
*/
#include <stdio.h>

void cumprimento(char nome[]) {
 printf("Ola, %s!\n", nome);
}

int main() {
    char nome [50];
    printf("Digite o seu nome: ");
    scanf("%s", &nome);

    cumprimento(nome);

    return 0;
}
