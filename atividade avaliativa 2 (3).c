/*2. Faça um algoritmo que leia dois números calcule o resultado da multiplicação de um pelo
outro sem utilizar a operação de multiplicação (ou seja, utilizando apenas soma)*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeroUm, numeroDois, contador, soma=0;
	printf("---------------------------------------Programa de calcular a multiplicação---------------------------------------------\n");
	printf("Digite o valor do primeiro número:");
	scanf("%d", &numeroUm);
	fflush(stdin);
	printf("Digite o valor do segundo número:");
	scanf("%d", &numeroDois);
	fflush(stdin);
	for(contador=1; contador<=numeroDois; contador++){
		soma=soma+numeroUm;
		}
	printf("O resultado da multiplicação é: %d\n", soma);
	system("pause");
	return 0;
}
