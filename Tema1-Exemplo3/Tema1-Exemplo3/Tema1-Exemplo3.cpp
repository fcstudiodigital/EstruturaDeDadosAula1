// Código adaptado e testado no VisualStudio

#include "stdafx.h"//Reduz o tempo de compilação e processamento desnecessário
#include "stdio.h"  //Entrada e saída
#include "stdlib.h" //Habilita suporte a system("pause")
#include "locale.h" //Habilita suporte a caracteres especiais e pontuação

int main()
{
	setlocale(LC_ALL, "Portuguese"); //Habilita caracteres especiais em português
	int x;
	printf("\n      Informe sua idade:");
	scanf_s("%d", &x);
	if (x > 15)
	{
		printf("\n\n      Você já pode votar!\n\n");
		printf("      Caso ainda não possua título procure o TRE.\n\n");
	}
	else
	{
		printf("      Você não tem idade para participar das eleições.\n\n");
	}
	printf("      Obrigado!\n\n\n\n");
	system("pause");
	return 0;
}