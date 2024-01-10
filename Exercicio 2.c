#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct MAGP_CAD{

	char rua [10];
	int numero;		
	
};	


struct MAGP_END{

		
	struct MAGP_CAD residencial; 
	
	struct MAGP_CAD comercio;
	
		
}ENDERECO; 

int main()
{

	
	printf("\n Informe o Endereco Residencial:\n");	
	scanf("%s[^\n]",ENDERECO.residencial.rua); 
	

		
	printf("\n Informe o numero: \n"); 
	scanf("%i",ENDERECO.residencial.numero); 

	
	printf("\n Informe o Endereco Comercial:\n");	
	scanf("%s",ENDERECO.comercio.rua);



		
	printf("\n Informe o valor: \n");
	scanf("%i",ENDERECO.comercio.numero);

	
	printf ("\n Reimprime em ordem tudo o cliente passou;");
	printf("%s",ENDERECO.residencial.rua);
	printf("%i",ENDERECO.residencial.numero);
	printf("%s",ENDERECO.comercio.rua);
	printf("%i",ENDERECO.comercio.numero);

	
	
	return(0);
}

