/* Aluno: Matheus Mendes
Exercicio 7 - "Desenvolva uma função que receba um número e retorne verdadeiro se for par e falso
caso contrário.".
*/

#include <stdio.h>

int ehPar(int num) {
    return num % 2 == 0;
}

int main() {
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    if (ehPar(valor)) {
        printf("Verdadeiro (numero par)\n");
    } else {
        printf("Falso (numero impar)\n");
    }

    return 0;
}
