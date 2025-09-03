#include <stdio.h>

int main() {
    int num[4];
    int i;

    // Leitura de 4 números
    for (i = 0; i < 4; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &num[i]);
    }

    printf("Numeros divisiveis por 2 e 3: ");
    for (i = 0; i < 4; i++) {
        if (num[i] % 2 == 0 && num[i] % 3 == 0) {
            printf("%d ", num[i]);
        }
    }

    printf("\n");

    return 0;
}

