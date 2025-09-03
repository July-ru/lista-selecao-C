#include <stdio.h>
#include <locale.h>

/* Quest�o 2 - Uma empresa decide dar um aumento de 30% aos funcion�rios cujo sal�rio � inferior a
500 reais. Escreva um programa que receba o sal�rio de um funcion�rio e imprima o valor do
sal�rio reajustado ou uma mensagem caso o funcion�rio n�o tenha direito ao aumento.
*/
int main(){
    setlocale(LC_ALL, "Portuguese");

    float salario;

    printf("Digite o sal�rio: ");
    scanf("%f", &salario);

    if (salario < 500){
        salario = salario * 1.3; //Aumento de 30%
        printf("Novo sal�rio: R$%.2f\n", salario);
    }else{
        printf("Sem direito a aumento.");
    }

    return 0;
}
