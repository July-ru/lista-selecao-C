#include <stdio.h>

//quest�o 17

int main() {
    int angulo;

    printf("Digite o angulo em graus: ");
    scanf("%d", &angulo);

    // Reduz o �ngulo ao intervalo [0, 360)
    while (angulo >= 360)
        angulo -= 360;
    while (angulo < 0)
        angulo += 360;

    // Determina o quadrante
    if (angulo >= 0 && angulo < 90)
        printf("1� quadrante\n");
    else if (angulo >= 90 && angulo < 180)
        printf("2� quadrante\n");
    else if (angulo >= 180 && angulo < 270)
        printf("3� quadrante\n");
    else // 270 <= angulo < 360
        printf("4� quadrante\n");

    return 0;
}

