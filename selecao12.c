#include <stdio.h>
#include <locale.h>

//quest�o 12

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    float n1, n2, n3, media;

    printf("Digite as tr�s notas do aluno.\n");
    printf("Nota 1: \n");
    scanf("%f", &n1);
    
    printf("Nota 2: \n");
    scanf("%f", &n2);
    
    printf("Nota 3: \n");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("M�dia = %.2f\n", media);

    if (media < 5.0)
        printf("Situa��o: Reprovado\n");
    else if (media < 7.0)   // aqui j� garante que � >= 5.0
        printf("Situa��o: Exame\n");
    else
        printf("Situa��o: Aprovado\n");

    return 0;
}


