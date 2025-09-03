#include <stdio.h>

//Questão 8

int main() {
    float lab, semestral, exame, media;

    printf("Digite a nota do trabalho de laboratorio (0-10): ");
    scanf("%f", &lab);
    printf("Digite a nota da avaliacao semestral (0-10): ");
    scanf("%f", &semestral);
    printf("Digite a nota do exame final (0-10): ");
    scanf("%f", &exame);

    // cálculo da média ponderada
    media = (lab * 2 + semestral * 3 + exame * 5) / 10.0;

    printf("\nMedia final = %.2f\n", media);

    if (media >= 8.0 && media <= 10.0)
        printf("Conceito: A\n");
    else if (media >= 7.0)
        printf("Conceito: B\n");
    else if (media >= 6.0)
        printf("Conceito: C\n");
    else if (media >= 5.0)
        printf("Conceito: D\n");
    else
        printf("Conceito: E\n");

    return 0;
}

