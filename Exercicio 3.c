#include <stdio.h>
#include <stdlib.h>

struct tipo_endereco
{
	char nome[40];
	char bairro[40];
	int numero;
	int cep;
	int telefone;
};

struct tipo_local{	
	struct tipo_endereco residencial;
	struct tipo_endereco comercial;
}local[5];


int main(void)
{
	int x = 0;
	int s = 0;
	int valorC = 0;
	int valorR = 0;
	char escolha;
	int tamanhoCadastro = 4;
	
	printf("\n______________________________________________________________\n\n");
	printf("\nCadastro de endereco residencial ou comercial? ('c' para comercial, 'r' residencial ou 'n' para fim de cadastro): ");
	fflush(stdin);
	scanf("%c", &escolha);
	printf("\n\n______________________________________________________________\n\n");
		
	local[5];
	while (escolha == 'c' && valorC < tamanhoCadastro)
	{
		printf("Cadastro de endereco comercial.\n");
		printf("\nNome da rua: ");
		fflush(stdin);
		gets(local[valorC].comercial.nome);
		printf("\nNome da bairro: ");
		fflush(stdin);
		gets(local[valorC].comercial.bairro);
		printf("\nInforme o numero: ");
		fflush(stdin);
		scanf("%d", &local[valorC].comercial.numero);
		fflush(stdin);
		printf("\nInforme o CEP: ");
		scanf("%d", &local[valorC].comercial.cep);
		fflush(stdin);
		printf("\nInforme o telefone: ");
		scanf("%d", &local[valorC].comercial.telefone);
		
		printf("\n______________________________________________________________\n\n");
		printf("\nAdicionar outro endereco?('c' ou 'r' e 'n' para fim de cadastro): ");
		fflush(stdin);
		scanf("%c", &escolha);
		printf("\n\n______________________________________________________________\n\n");
		valorC++;
	}
	
		printf("\n______________________________________________________________\n\n");
		printf("\nAdicionar outro endereco?('c' ou 'r' e 'n' para fim de cadastro): ");
		fflush(stdin);
		scanf("%c", &escolha);
		printf("\n\n______________________________________________________________\n\n");
		
	while (escolha == 'r'&& valorR < tamanhoCadastro)
	{
		printf("Cadastro de endereco residencial.\n");
		printf("\nNome da rua: ");
		fflush(stdin);
		gets(local[valorR].residencial.nome);
		printf("\nNome da bairro: ");
		fflush(stdin);
		gets(local[valorR].residencial.bairro);
		printf("\nInforme o numero: ");
		fflush(stdin);
		scanf("%d", &local[valorR].residencial.numero);
		fflush(stdin);
		printf("\nInforme o CEP: ");
		scanf("%d", &local[valorR].residencial.cep);
		fflush(stdin);
		printf("\nInforme o telefone: ");
		scanf("%d", &local[valorR].residencial.telefone);
		
		printf("\n______________________________________________________________\n\n");
		printf("\nAdicionar outro endereco?('c' ou 'r' e 'n' para fim de cadastro): ");
		fflush(stdin);
		scanf("%c", &escolha);
		printf("\n\n______________________________________________________________\n\n");
		valorR++;
	}
		printf("\n______________________________________________________________\n\n");
		printf("\nAdicionar outro endereco?('c' ou 'r' e 'n' para fim de cadastro): ");
		fflush(stdin);
		scanf("%c", &escolha);
		printf("\n\n______________________________________________________________\n\n");
	
	
	
	
	system("clear||cls");
	printf("\nEnderecos cadastrados comerciais.\n\n");
	printf("\nVoce cadastrou %d enderecos comerciais.", valorC);
	for (x=0; x<valorC; x++)
	{
		printf("\n______________________________________________________________\n\n");
		printf("\nEndereco: ");
		printf("\nRua: %s", local[x].comercial.nome);
		printf("\nBairro: %s", local[x].comercial.bairro);
		printf("\nNumero: %d", local[x].comercial.numero);
		printf("\nCEP: %d", local[x].comercial.cep);
		printf("\nTelefone: %d", local[x].comercial.telefone);
		printf("\n\n______________________________________________________________\n\n");
	}
	system("clear||cls");
	printf("\nEnderecos cadastrados residenciais.\n\n");
	printf("\nVoce cadastrou %d enderecos residenciais.", valorR);
	for (s=0; s<valorR; s++)
	{
		printf("\n______________________________________________________________\n\n");
		printf("\nEndereco: ");
		printf("\nRua: %s", local[s].residencial.nome);
		printf("\nBairro: %s", local[s].residencial.bairro);
		printf("\nNumero: %d", local[s].residencial.numero);
		printf("\nCEP: %d", local[s].residencial.cep);
		printf("\nTelefone: %d", local[s].residencial.telefone);
		printf("\n\n______________________________________________________________\n\n");
	}
	
	
	
	
	
	
	return 0;
}
