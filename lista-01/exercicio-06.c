/* Aluno: Matheus Mendes
Exercicio 6 - "Procedimento que recebe a média de um aluno e informa se ele foi aprovado
(média ≥ 6)".
*/

#include <stdio.h>

void verificaçao(float media) {
    if (media >= 6) {
        printf("Aprovado\n");
    }
}

int main() {
    float media;
    printf("Digite a nota do aluno: ");
    scanf("%f", &media);
    verificaçao(media);
    return 0;
}
