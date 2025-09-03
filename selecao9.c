#include <stdio.h>

//questão 9

int main() {
    float preco;
    int codigo;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite o codigo de origem do produto: ");
    scanf("%d", &codigo);

    if (codigo == 1)
        printf("Procedencia: Sul\n");
    else if (codigo == 2)
        printf("Procedencia: Norte\n");
    else if (codigo == 3)
        printf("Procedencia: Leste\n");
    else if (codigo == 4)
        printf("Procedencia: Oeste\n");
    else if (codigo == 5 || codigo == 6)
        printf("Procedencia: Nordeste\n");
    else if (codigo >= 7 && codigo <= 9)
        printf("Procedencia: Sudeste\n");
    else if (codigo >= 10 && codigo <= 20)
        printf("Procedencia: Centro-Oeste\n");
    else if (codigo >= 21 && codigo <= 30)
        printf("Procedencia: Nordeste\n");
    else
        printf("Codigo invalido!\n");

    return 0;
}

