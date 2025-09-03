#include <stdio.h>

//questao 18

int main() {
    int horasExtrasMin, horasFaltaMin;
    float horasExtras, horasFalta;
    float H;
    int premio;

    // Entrada de dados
    printf("Digite o numero de horas extras (em minutos): ");
    scanf("%d", &horasExtrasMin);
    printf("Digite o numero de horas-falta (em minutos): ");
    scanf("%d", &horasFaltaMin);

    // Conversão para horas
    horasExtras = horasExtrasMin / 60.0;
    horasFalta = horasFaltaMin / 60.0;

    // Cálculo de H
    H = horasExtrasMin - (2.0/3.0) * horasFaltaMin;

    // Determinação do prêmio
    if (H > 2400)
        premio = 500;
    else if (H > 1800)
        premio = 400;
    else if (H > 1200)
        premio = 300;
    else if (H > 600)
        premio = 200;
    else
        premio = 100;

    // Impressão dos resultados
    printf("\nHoras extras: %.2f horas\n", horasExtras);
    printf("Horas-falta: %.2f horas\n", horasFalta);
    printf("Premio: $%d\n", premio);

    return 0;
}

