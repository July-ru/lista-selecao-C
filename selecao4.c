#include <stdio.h>

//questão 4

int main(){
	
	int idade;
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	if (idade>=18)
	printf("Maior de idade.\n");
	else
	printf("Menor de idade.\n");
	
	return 0;
	
}
