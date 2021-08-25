#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
Leia uma velocidade em km/h, calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6)
*/

main()
{
	int velocidade_kmh, velocidade_ms;
	
	printf("Digite a velocidade em km/h: ");
	scanf("%d",&velocidade_kmh);
	velocidade_ms = (velocidade_kmh/3.6);
	printf("A Conversao do valor lido em km/h sera equivalente,em m/s, a:  %d",velocidade_ms);

	
}
