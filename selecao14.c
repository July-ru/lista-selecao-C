#include <stdio.h>
#include <locale.h>

//questão 14

int main() {
	setlocale(LC_ALL, "Portuguese");
    int codigo;

    printf("Digite o código do cargo (1 a 5): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Cargo: Escriturario\nAumento: 50%%\n");
            break;
        case 2:
            printf("Cargo: Secretário\nAumento: 35%%\n");
            break;
        case 3:
            printf("Cargo: Caixa\nAumento: 20%%\n");
            break;
        case 4:
            printf("Cargo: Gerente\nAumento: 10%%\n");
            break;
        case 5:
            printf("Cargo: Diretor\nNão tem aumento.\n");
            break;
        default:
            printf("Código inválido!\n");
    }

    return 0;
}

