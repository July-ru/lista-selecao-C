#include <stdio.h>
#include <locale.h>

//questão 6

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    float altura, peso;
    char genero;

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o genero (M/F): ");
    scanf(" %c", &genero); // espaço antes do %c evita problema do ENTER

    if (genero == 'M' || genero == 'm')
        peso = (72.7 * altura) - 58;
    else if (genero == 'F' || genero == 'f')
        peso = (62.1 * altura) - 44.7;
    else {
        printf("Genero invalido!\n");
        return 0;
    }

    printf("Peso ideal = %.2f kg\n", peso);

    return 0;
}

