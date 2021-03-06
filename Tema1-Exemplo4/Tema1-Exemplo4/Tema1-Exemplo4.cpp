// Código adaptado e testado no VisualStudio

#include "stdafx.h"//Reduz o tempo de compilação e processamento desnecessário
#include "stdio.h"  //Entrada e saída
#include "stdlib.h" //Habilita suporte a system("pause")
#include "locale.h" //Habilita suporte a caracteres especiais e pontuação
#include "conio.h"  //Habilita função _getch (getch está em desuso)

int main()
{
	setlocale(LC_ALL, "Portuguese"); //Habilita caracteres especiais em português
	int x;
	char op;
	printf("\n      Informe sua idade:");
	scanf_s("%d", &x);
	printf("\n      Tecle [s] se vai votar nas próximas eleições:");
	op = _getch();
	if ((op == 's') || (op == 'S'))
	{
		if (x > 15)
		{
			printf("\n\n      Você já pode votar!\n\n");
			if (x > 18)
			{
				printf("      Você já pode ser candidato nas eleições.\n\n");
				if (x > 64)
				{
					printf("      Você está liberado da obrigatoriedade de votar.\n\n");
				}
			}
		}
		else
		{
			printf("      Você não tem idade para participar das eleições.\n\n");
		}
		printf("      Obrigado!\n\n\n\n");

		system("pause");
		return 0;
	}
}
