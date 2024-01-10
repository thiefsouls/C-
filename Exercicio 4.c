#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct tipo_correspondencia{
		
		char cidade[20];
		char bairro[10];
		char estado[20];
		int numero;
		int cep;
		
}corre_A, corre_B;



int main(void){
	
	corre_A = corre_B;
	
	printf("\n\n Entre com o nome da Cidade ");
	fflush(stdin);
	scanf("%s",corre_A.cidade);
	printf("\n\n Entre com o nome da Bairro");
	fflush(stdin);
	scanf("%s",corre_A.bairro);
	printf("\n\n Entre com o nome da Estado");
	fflush(stdin);
	scanf("%s",corre_A.estado);
	printf("\n\n Entre com o nome da numero");
	fflush(stdin);
	scanf("%d",corre_A.numero);
	printf("\n\n Entre com o nome da cep");
	fflush(stdin);
	scanf("%d",corre_A.cep);
	
	printf("\n nome da Cidade: %s\n",corre_B.cidade );
	printf("\n nome da bairro: %s\n",corre_B.bairro );
	printf("\n nome da estado: %s\n",corre_B.estado );
	printf("\n nome da numero: %i\n",corre_B.numero );
	printf("\n nome da cep: %d\i",corre_B.cep);
	
	
	
	return 0;
	
	
};


