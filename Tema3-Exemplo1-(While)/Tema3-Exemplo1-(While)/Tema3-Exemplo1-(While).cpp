// Código adaptado e testado no VisualStudio
// Tema 3 - Exemplo 1 "While" - Tabuada do 7 (multiplicação)

#include "stdafx.h"//Reduz o tempo de compilação e processamento desnecessário
#include "stdio.h"  //Entrada e saída
#include "stdlib.h" //Habilita suporte a system("pause")
#include "locale.h" //Habilita suporte a caracteres especiais e pontuação
#include "conio.h"  //Habilita função _getch (getch está em desuso)

int main() {
	setlocale(LC_ALL, "Portuguese"); //Habilita caracteres especiais em português
	int x = 0;

	x = 1;
	while (x < 11)
	{
		printf("7 x %d = %d \n", x, 7 * x);
		x++;
	}
	printf("\n");
	system("pause");

    return 0;
}