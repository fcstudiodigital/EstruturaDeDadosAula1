// Código adaptado e testado no VisualStudio
// algoritmo de votação usando "if" 

#include "stdafx.h"//Reduz o tempo de compilação e processamento desnecessário
#include "stdio.h"  //Entrada e saída
#include "stdlib.h" //Habilita suporte a system("pause")
#include "locale.h" //Habilita suporte a caracteres especiais e pontuação
#include "conio.h"  //Habilita função _getch (getch está em desuso)

int main()
{
	setlocale(LC_ALL, "Portuguese"); //Habilita caracteres especiais em português
	int x;
	printf("\n      Lista de candidatos:\n\n");
	printf("\n      1 - Zé Carioca");
	printf("\n      2 - Ciclano Albuquerque");
	printf("\n      3 - Fulano da Silva");
	printf("\n      4 - José Colméia");
	printf("\n      5 - Seu Manoel do 505\n\n");
	printf("\n      Informe o número do seu candidato: ");
	scanf_s("%d", &x);
	if (x == 1)
	{
		printf("\n\n      Seu voto foi computado para: \n\n      Zé Carioca!\n\n");
	}
	else if (x == 2)
	{
		printf("\n\n      Seu voto foi computado para: \n\n      Ciclano Albuquerque!\n\n");
	}
	else if (x == 3)
	{
		printf("\n\n      Seu voto foi computado para: \n\n      Fulano da Silva!\n\n");
	}
	else if (x == 4)
	{
		printf("\n\n      Seu voto foi computado para: \n\n      José Colméia!\n\n");
	}
	else if (x == 4)
	{
		printf("\n\n      Seu voto foi computado para: \n\n      Seu Manoel do 505!\n\n");
	}
	else { printf("Voto inválido!\n\n\n"); }
	system("pause");
	return 0;
}