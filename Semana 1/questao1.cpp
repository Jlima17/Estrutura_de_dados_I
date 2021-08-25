#include <stdio.h>
#include <stdlib.h>

/*
Leia uma velocidade em m/s, calcule e escreva esta velocidade em km/h. (Vkm/h = Vm/s * 3.6)
*/

main() 
{
	int velocidade_ms, velocidade_kmh;
	
	printf("Digite a velocidade em m/s: ");
	scanf("%d",&velocidade_ms);
	velocidade_kmh = (velocidade_ms*3.6);
	printf("A Conversao do valor lido em m/s sera equivalente,em km/h, a:  %d",velocidade_kmh);

}
