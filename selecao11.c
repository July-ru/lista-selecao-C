#include <stdio.h>
#include <locale.h>

//quest�o 11

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num1, num2;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    if (num1 < num2)
        printf("O menor n�mero �: %d\n", num1);
    else if (num2 < num1)
        printf("O menor n�mero �: %d\n", num2);
    else
        printf("Os dois n�meros s�o iguais: %d\n", num1);

    return 0;
}

