// Código adaptado e testado no VisualStudio

#include "stdafx.h"//Reduz o tempo de compilação e processamento desnecessário
#include "stdio.h"  //Entrada e saída
#include "stdlib.h" //Habilita suporte a system("pause")
#include "locale.h" //Habilita suporte a caracteres especiais e pontuação

int main()
{
	setlocale(LC_ALL, "Portuguese"); //Habilita caracteres especiais em português
	int x;
	printf("     Informe sua idade:");
	scanf_s("%d", &x);
	if (x > 15)
		printf("     \nVocê já pode votar!\n\n");
	else
		printf("     Você não tem idade para participar das eleições.\n\n");
	printf("     Obrigado!\n\n");
	system("pause\n\n");
	return 0;
}