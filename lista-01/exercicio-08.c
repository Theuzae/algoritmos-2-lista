/* Aluno: Matheus Mendes
Exercicio 8 - "Crie um algoritmo que utilize uma função para calcular o quadrado de um número e exiba
o resultado.".
*/

#include <stdio.h>

int quadrado(int num) {
    return num * num;
}

int main() {
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    printf("O quadrado eh %d\n", quadrado(valor));

    return 0;
}
