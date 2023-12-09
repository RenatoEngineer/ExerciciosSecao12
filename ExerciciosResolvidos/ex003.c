/*
 * ex003.c
 *
 *  Criado em: 9 de dez de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao12
 */

#include <stdio.h>

struct Vetor{
	float x;
	float y;
	float z;
};

int main(){

	struct Vetor vetores[3];

	for (int i = 0; i < 2; i++){
		printf("Informe os Valores para o Vetor: %d\n", i + 1);

		printf("Informe o Valor para X: ");
		fflush(stdout);
		scanf("%f", &vetores[i].x);

		printf("Informe o Valor para Y: ");
		fflush(stdout);
		scanf("%f", &vetores[i].y);

		printf("Informe o Valor para Z: ");
		fflush(stdout);
		scanf("%f", &vetores[i].z);

		printf("\n");
	}

	vetores[2].x = vetores[0].x + vetores[1].x;
	vetores[2].y = vetores[0].y + vetores[1].y;
	vetores[2].z = vetores[0].z + vetores[1].z;

	printf("\nA Soma dos pontos dos Vetores e:\nX: %.2f\nY: %.2f\nZ: %.2f\n", vetores[2].x, vetores[2].y, vetores[2].z);

	return 0;
}
