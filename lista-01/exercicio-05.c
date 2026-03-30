/* Aluno: Matheus Mendes
Exercicio 5 - "Função que recebe três notas e retorna a média".
*/

#include <stdio.h>

float media(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

int main() {
    float n1, n2, n3;

    printf("Digite suas tres notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Sua media final eh: %.2f\n", media(n1, n2, n3));

    return 0;
}
