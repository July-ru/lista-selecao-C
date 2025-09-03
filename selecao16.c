#include <stdio.h>

//questao 16

int main() {
    int idade, codigo = 0;
    char grupo;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 18 || idade > 70) {
        printf("Idade fora da faixa permitida para segurado.\n");
        return 0; // encerra o programa
    }

    printf("Digite o grupo de risco (b = baixo, m = medio, a = alto): ");
    scanf(" %c", &grupo); // espaço antes do %c pra limpar buffer

    // Determinar código com base na idade e no grupo
    if (idade >= 18 && idade <= 24) {
        switch (grupo) {
            case 'b': case 'B': codigo = 7; break;
            case 'm': case 'M': codigo = 8; break;
            case 'a': case 'A': codigo = 9; break;
            default: printf("Grupo de risco invalido!\n"); return 0;
        }
    } 
    else if (idade >= 25 && idade <= 40) {
        switch (grupo) {
            case 'b': case 'B': codigo = 4; break;
            case 'm': case 'M': codigo = 5; break;
            case 'a': case 'A': codigo = 6; break;
            default: printf("Grupo de risco invalido!\n"); return 0;
        }
    } 
    else if (idade >= 41 && idade <= 70) {
        switch (grupo) {
            case 'b': case 'B': codigo = 1; break;
            case 'm': case 'M': codigo = 2; break;
            case 'a': case 'A': codigo = 3; break;
            default: printf("Grupo de risco invalido!\n"); return 0;
        }
    }

    printf("Codigo do seguro: %d\n", codigo);

    return 0;
}

