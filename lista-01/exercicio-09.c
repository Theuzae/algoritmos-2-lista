/* Aluno: Matheus Mendes
Exercicio 9 - "Desenvolva um programa modular que:
● Leia dois números;
● Use uma função para calcular a soma;
● Use um procedimento para exibir o resultado."
*/

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

void exibirResultado(int resultado) {
    printf("Resultado: %d\n", resultado);
}

int main() {
    int n1, n2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    int resultado = soma(n1, n2);

    exibirResultado(resultado);

    return 0;
}
