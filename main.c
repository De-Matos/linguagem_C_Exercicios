#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
int main() {
    printf("Cadastro Pessoal\n\n\n");
     
    char nomeCompleto[50];
    printf("Digite o seu nome completo: ");
    fflush (stdin);
    fgets (nomeCompleto, 50, stdin);

    char endereco[50];
	printf("Digite o seu endereco: ");
	fflush (stdin);
	fgets (endereco, 50, stdin);

    char telefone[20];
	printf("Digite o seu telefone: ");
	fflush (stdin);
	fgets (telefone, 20, stdin);
	       
    printf("\n\n\nDados Cadastrados com Sucesso\n\n\n");    	  
    printf ("Nome completo: %s \n", nomeCompleto);
	printf ("Endereco: %s \n", endereco);
    printf ("Telefone: %s \n", telefone);

    system ("pause");
    return 0;
}