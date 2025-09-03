#include <stdio.h>
#include <math.h>

//questão 15

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Menu de opcoes:\n");
    printf("1 - Soma\n");
    printf("2 - Raiz quadrada\n");
    printf("3 - Finalizar\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        // Soma de dois números
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        resultado = num1 + num2;
        printf("Resultado da soma: %.2f\n", resultado);
    } 
    else if (opcao == 2) {
        // Raiz quadrada de um número
        printf("Digite um numero: ");
        scanf("%f", &num1);
        if (num1 < 0)
            printf("Nao é possivel calcular a raiz de numero negativo!\n");
        else {
            resultado = sqrt(num1);
            printf("Raiz quadrada: %.2f\n", resultado);
        }
    } 
    else if (opcao == 3) {
        printf("Finalizando programa...\n");
    } 
    else {
        printf("Opcao invalida!\n");
    }

    return 0;
}

