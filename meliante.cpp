#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <locale.h>

int main() {

	int idade;
	float nota;
	char escol, antec, psico;

	setlocale(LC_ALL, "Portuguese");
	printf("informe a idade:\n");
	scanf_s("%i", &idade);
	if (idade >= 18) {
		printf("Tem a escolaridade:\n");
		scanf_s("\n%c", &escol);
		if (escol == 'S' || escol == 's') {
			printf("Tem antecedentes :\n");
			scanf_s("\n%c", &antec);
			if (antec == 'N' || antec == 'n') {
				printf("informe a nota:\n");
				scanf_s("%f", &nota);
				if (nota >= 7) {
					printf("informe se é apto:\n");
					scanf_s("\n%c", &psico);
					if (psico == 'S' || psico == 's') {
						printf("Chamar para teste fisico\n\n");
					} 
					else 
					{
						printf("O Candidadto é biruta\n\n");
					}
				} 
				else 
				{
					printf("O não tem nota o suficiente\n\n");
				}
			} 
			else 
			{
				printf("É um Marginal\n\n");
			}
		} 
		else 
		{
			printf("Não é formado\n\n");
		}
	} 
	else 
	{
		printf("É menor de idade\n\n");
	}
}

