#include <stdio.h>
#include <string.h>

/* Questão 3 - Faça um programa que verifique a validade de uma senha fornecida pelo usuário.
*/

int main(){

    char senha[20];

    printf("Digite uma senha: ");
    scanf("%s", senha);
    if(strcmp(senha,"ASDFG") == 0)
        printf("Acesso permitido!\n");
    else
        printf("Acesso negado!\n");
}
