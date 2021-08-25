#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
Leia o valor do dólar e um valor em dólar, calcule e escreva o equivalente em real (R$).
*/

main()
{
	float valor_dolar, quant_dolar, valor_real;
	
	printf("Digite aqui a cotacao do dolar: ");
	scanf("%f",&valor_dolar);
	printf("Digite aqui quantos dolares serao convertidos: ");
	scanf("%f",&quant_dolar);
	
	valor_real = (valor_dolar * quant_dolar);
	printf("O valor de %0.2fU$ valera em reais a R$: %0.2f",valor_dolar, valor_real);
}


