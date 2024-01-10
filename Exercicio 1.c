#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados 
{
	char aluno[50];
	int idade;
};

int main()
{
	struct dados magp;
	printf("Escreva o nome do aluno: ");
	 scanf("%s", &magp.aluno);
	printf("Escreva a Idade do Aluno");
	scanf("%i",&magp.idade);
	
	printf("%s Sua idade %i",magp.aluno,magp.idade);
	return 0;
}

