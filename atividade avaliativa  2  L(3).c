/*2. Faça um algoritmo que leia dois números calcule o resultado da multiplicação de um pelo
outro sem utilizar a operação de multiplicação (ou seja, utilizando apenas soma)*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, soma=0, soma2=0;
	float numeroUm, numeroDois, resultado;
	
	printf("----------------------------------Programa para calculo de multiplicação----------------------------------------\n");
	
	printf("Digite o valor do primeiro número, que deseja multiplicar:");
	scanf("%f", &numeroUm);
	fflush(stdin);
	printf("Digite o valor do segundo número, que deseja multiplicar:");
	scanf("%f", &numeroDois);
	fflush(stdin);
	
	for(contador=1; contador<=numeroDois; contador++){
		resultado = resultado + numeroUm;
	}
	
	printf("O resultado da multiplicação é: %.1f.\n", resultado);
	
	system("pause");
	return 0;
}
