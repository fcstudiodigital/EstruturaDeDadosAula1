// Código adaptado e testado no VisualStudio
// Tema 3 - Exemplo 2 "for" - Tabuada do 7 (multiplicação)

#include "stdafx.h"//Reduz o tempo de compilação e processamento desnecessário
#include "stdio.h"  //Entrada e saída
#include "stdlib.h" //Habilita suporte a system("pause")
#include "locale.h" //Habilita suporte a caracteres especiais e pontuação
#include "conio.h"  //Habilita função _getch (getch está em desuso)

int main() {
	setlocale(LC_ALL, "Portuguese"); //Habilita caracteres especiais em português
	int x;

	for (x = 1; x < 11; x++)
		printf(" 7 x %d = %d \n", x, 7 * x);
	printf("\n");
	system("pause");

	return 0;
}