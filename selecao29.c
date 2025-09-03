#include <stdio.h>

//questão 29

int main() {
    int n1, n2, n3, n4;

    printf("Digite o 1º numero: ");
    scanf("%d", &n1);

    printf("Digite o 2º numero: ");
    scanf("%d", &n2);

    printf("Digite o 3º numero: ");
    scanf("%d", &n3);

    printf("Digite o 4º numero: ");
    scanf("%d", &n4);

    printf("Numeros divisiveis por 2 e 3: ");

    if (n1 % 2 == 0 && n1 % 3 == 0)
        printf("%d ", n1);

    if (n2 % 2 == 0 && n2 % 3 == 0)
        printf("%d ", n2);

    if (n3 % 2 == 0 && n3 % 3 == 0)
        printf("%d ", n3);

    if (n4 % 2 == 0 && n4 % 3 == 0)
        printf("%d ", n4);

    printf("\n");

    return 0;
}
