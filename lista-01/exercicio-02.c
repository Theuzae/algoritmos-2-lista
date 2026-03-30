/* Aluno: Matheus Mendes
Exercicio 2 - "Função que receba um número inteiro e retorne seu dobro".
*/

#include <stdio.h>

int dobro(int numero) {
    return numero * 2;
}

int main() {
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    printf("O dobro de %d eh %d\n", valor, dobro(valor));
    return 0;
}
