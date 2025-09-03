#include <stdio.h>

//questão 25

int main() {
    float precoEtiqueta, precoFinal;
    int condicao;

    printf("Digite o preco do produto: R$ ");
    scanf("%f", &precoEtiqueta);

    printf("Escolha a condicao de pagamento:\n");
    printf("1 - A vista em dinheiro ou cheque (10%% de desconto)\n");
    printf("2 - A vista no cartao de credito (5%% de desconto)\n");
    printf("3 - Em 2 vezes (preco normal, sem juros)\n");
    printf("4 - Em 3 vezes (preco normal + 10%% de juros)\n");
    printf("Digite a opcao (1 a 4): ");
    scanf("%d", &condicao);

    if (condicao == 1)
        precoFinal = precoEtiqueta * 0.90; // 10% de desconto
    else if (condicao == 2)
        precoFinal = precoEtiqueta * 0.95; // 5% de desconto
    else if (condicao == 3)
        precoFinal = precoEtiqueta;        // preço normal
    else if (condicao == 4)
        precoFinal = precoEtiqueta * 1.10; // 10% de juros
    else {
        printf("Opcao invalida!\n");
        return 0;
    }

    printf("Preco a pagar: R$ %.2f\n", precoFinal);

    return 0;
}

