#include <stdio.h>

//quest�o 26

int main() {
    int num1, num2;
    char operacao;
    float resultado;

    // Entrada dos n�meros e opera��o
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao); // espa�o antes de %c para limpar buffer

    // Sele��o da opera��o
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 == 0)
                printf("Erro: divisao por zero!\n");
            else {
                resultado = (float)num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}

