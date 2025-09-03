#include <stdio.h>

//questao19

int main() {
    float salarioMinimo, valorHora, salarioMes, valorDependentes, valorHorasExtras;
    float salarioBruto, salarioLiquido, gratificacao, salarioReceber, irrf = 0;
    int horasTrabalhadas, horasExtras, dependentes;

    // Entrada de dados
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);

    printf("Digite o numero de horas extras: ");
    scanf("%d", &horasExtras);

    // Valor da hora trabalhada
    valorHora = salarioMinimo / 5.0;

    // Salário do mês
    salarioMes = horasTrabalhadas * valorHora;

    // Acréscimo por dependentes
    valorDependentes = dependentes * 32.0;

    // Acréscimo por horas extras (50% sobre o valor da hora)
    valorHorasExtras = horasExtras * (valorHora * 1.5);

    // Salário bruto
    salarioBruto = salarioMes + valorDependentes + valorHorasExtras;

    // Cálculo do IRRF
    if (salarioBruto < 200)
        irrf = 0;
    else if (salarioBruto <= 500)
        irrf = salarioBruto * 0.10;
    else
        irrf = salarioBruto * 0.20;

    // Salário líquido
    salarioLiquido = salarioBruto - irrf;

    // Gratificação
    if (salarioLiquido <= 350)
        gratificacao = 100;
    else
        gratificacao = 50;

    // Salário a receber
    salarioReceber = salarioLiquido + gratificacao;

    // Impressão dos resultados
    printf("\nSalario do mes: R$ %.2f\n", salarioMes);
    printf("Valor dos dependentes: R$ %.2f\n", valorDependentes);
    printf("Valor das horas extras: R$ %.2f\n", valorHorasExtras);
    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("IRRF: R$ %.2f\n", irrf);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);
    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Salario a receber: R$ %.2f\n", salarioReceber);

    return 0;
}

