#include <stdio.h>

//questão 17

int main() {
    int angulo;

    printf("Digite o angulo em graus: ");
    scanf("%d", &angulo);

    // Reduz o ângulo ao intervalo [0, 360)
    while (angulo >= 360)
        angulo -= 360;
    while (angulo < 0)
        angulo += 360;

    // Determina o quadrante
    if (angulo >= 0 && angulo < 90)
        printf("1º quadrante\n");
    else if (angulo >= 90 && angulo < 180)
        printf("2º quadrante\n");
    else if (angulo >= 180 && angulo < 270)
        printf("3º quadrante\n");
    else // 270 <= angulo < 360
        printf("4º quadrante\n");

    return 0;
}

