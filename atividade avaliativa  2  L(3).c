/*2. Fa�a um algoritmo que leia dois n�meros calcule o resultado da multiplica��o de um pelo
outro sem utilizar a opera��o de multiplica��o (ou seja, utilizando apenas soma)*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, soma=0, soma2=0;
	float numeroUm, numeroDois, resultado;
	
	printf("----------------------------------Programa para calculo de multiplica��o----------------------------------------\n");
	
	printf("Digite o valor do primeiro n�mero, que deseja multiplicar:");
	scanf("%f", &numeroUm);
	fflush(stdin);
	printf("Digite o valor do segundo n�mero, que deseja multiplicar:");
	scanf("%f", &numeroDois);
	fflush(stdin);
	
	for(contador=1; contador<=numeroDois; contador++){
		resultado = resultado + numeroUm;
	}
	
	printf("O resultado da multiplica��o �: %.1f.\n", resultado);
	
	system("pause");
	return 0;
}
