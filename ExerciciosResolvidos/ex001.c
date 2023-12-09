/*
 * ex001.c
 *
 *  Criado em: 9 de dez de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao12
 */

#include <stdio.h>
#include <string.h> //Necessario para utilizar 'strtok'

struct st_pessoa{
	char nome[100];
	int idade;
	char endereco[200];
};

int main(){

	struct st_pessoa pessoa;

	printf("Informe o nome: ");
	fflush(stdout);
	fgets(pessoa.nome, 100, stdin);

	printf("Informe a Idade: ");
	fflush(stdout);
	scanf("%d", &pessoa.idade);
	getchar(); //Corrige bug do Enter

	printf("Informe o Endereco: ");
	fflush(stdout);
	fgets(pessoa.endereco, 200, stdin);

	printf("\n\n======== DADOS DA PESSOA ========\n");
	printf("Nome: %s\n", strtok (pessoa.nome, "\n")); //Corrige bug do Enter
	printf("Idade: %d\n", pessoa.idade);
	printf("Endereco: %s\n", pessoa.endereco);


	return 0;
}
