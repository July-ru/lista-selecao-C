#include <stdio.h>
#include <locale.h>

/* Questão 2 - Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferior a
500 reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do
salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento.
*/
int main(){
    setlocale(LC_ALL, "Portuguese");

    float salario;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    if (salario < 500){
        salario = salario * 1.3; //Aumento de 30%
        printf("Novo salário: R$%.2f\n", salario);
    }else{
        printf("Sem direito a aumento.");
    }

    return 0;
}
