/* Aluno: Matheus Mendes
Exercicio 3 - "Função que receba dois numeros e calcule a soma".
*/

#include <stdio.h>

float soma(float a, float b) {
    return a + b;
}

int main() {
    float num1, num2;

    printf("Digite dois numeros: \n");
    scanf("%f %f", &num1, &num2);

    printf("o resultado da soma dos numeros eh %.2f", soma(num1, num2));
    return 0;
}
