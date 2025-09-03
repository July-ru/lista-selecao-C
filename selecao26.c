#include <stdio.h>

//questão 26

int main() {
    int num1, num2;
    char operacao;
    float resultado;

    // Entrada dos números e operação
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao); // espaço antes de %c para limpar buffer

    // Seleção da operação
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

