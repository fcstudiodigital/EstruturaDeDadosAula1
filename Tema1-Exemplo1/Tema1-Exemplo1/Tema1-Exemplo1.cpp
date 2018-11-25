// Código adaptado e testado no VisualStudio
//

#include "stdafx.h" //Reduz o tempo de compilação e processamento desnecessário
#include "stdio.h"  //Entrada e saída
#include "stdlib.h" //Habilita suporte a system("pause")
#include "locale.h" //Habilita suporte a caracteres especiais e pontuação


int main()
{
	setlocale(LC_ALL, "Portuguese"); //Habilita caracteres especiais em português
	int x;
	printf("\n      Informe sua idade: ");
	scanf_s("%d", &x);
	if (x > 15)
	{
		printf("\n      Você já pode votar!\n\n");
		printf("\n      Obrigado!\n\n");
	}
	else //Incluí função else para responder caso contrário
	{
		if (x<16)
			printf("\n      Você ainda não pode votar!\n\n");
	}
	system("pause");
	return 0;
}