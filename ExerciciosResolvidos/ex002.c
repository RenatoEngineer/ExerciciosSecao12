/*
 * ex002.c
 *
 *  Criado em: 9 de dez de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao12
 */

#include <stdio.h>
#include <string.h>

struct st_aluno{
	char nome[100];
	char matricula[10];
	char curso[100];
};

int main(){

	struct st_aluno alunos[5];

	printf(".:: CADASTRO ALUNO ::.\n\n");

	for (int i = 0; i < 5; i++){
		printf("Cadastro %d de 5 ::.\n", i + 1);

		printf("Informe o Nome: ");
		fflush(stdout);
		fgets(alunos[i].nome, 100, stdin);

		printf("Informe a Matricula: ");
		fflush(stdout);
		fgets(alunos[i].matricula, 10, stdin);

		printf("Informe o Curso: ");
		fflush(stdout);
		fgets(alunos[i].curso, 100, stdin);

		printf("\n");

	}

	for (int i = 0; i < 5; i ++){
		printf("Dados %d de 5\n", i + 1);
		printf("Nome: %s\n", strtok (alunos[i].nome, "\n"));
		printf("Matricula: %s\n", strtok (alunos[i].matricula, "\n"));
		printf("Curso: %s\n", strtok (alunos[i].curso, "\n"));
		printf("----------------------------\n");
	}

	return 0;
}
