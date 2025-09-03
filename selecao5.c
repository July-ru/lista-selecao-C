#include <stdio.h>
//questão 5 

int main() {
    float salario;
    

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario <= 300)
        salario = salario * 1.5; // aumento de 50%
    else
        salario = salario * 1.3; // aumento de 30%

    printf("Novo salario: R$ %.2f\n", salario);

    return 0;
}

