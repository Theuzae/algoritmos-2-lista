/* Aluno: Matheus Mendes
Exercicio 10 - "Crie um conjunto de funções para:
● calcular soma
● calcular média
● calcular maior valor
E utilize todas em um programa principal."
*/


#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

float media(int a, int b) {
    return (a + b) / 2.0;
}

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int n1, n2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    printf("Soma: %d\n", soma(n1, n2));
    printf("Media: %.2f\n", media(n1, n2));
    printf("Maior: %d\n", maior(n1, n2));

    return 0;
}
