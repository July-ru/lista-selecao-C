#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);

    // Verifica se é triângulo (soma de dois lados > terceiro lado)
    if (a + b > c && a + c > b && b + c > a) {
        // Verifica tipo
        if (a == b && b == c)
            printf("Triangulo equilatero\n");
        else if (a == b || a == c || b == c)
            printf("Triangulo isosceles\n");
        else
            printf("Triangulo escaleno\n");
    } else {
        printf("Nao forma um triangulo\n");
    }

    return 0;
}

