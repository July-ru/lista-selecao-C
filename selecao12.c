#include <stdio.h>
#include <locale.h>

//questão 12

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    float n1, n2, n3, media;

    printf("Digite as três notas do aluno.\n");
    printf("Nota 1: \n");
    scanf("%f", &n1);
    
    printf("Nota 2: \n");
    scanf("%f", &n2);
    
    printf("Nota 3: \n");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("Média = %.2f\n", media);

    if (media < 5.0)
        printf("Situação: Reprovado\n");
    else if (media < 7.0)   // aqui já garante que é >= 5.0
        printf("Situação: Exame\n");
    else
        printf("Situação: Aprovado\n");

    return 0;
}


