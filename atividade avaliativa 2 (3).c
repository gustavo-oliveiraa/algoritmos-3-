/*2. Fa�a um algoritmo que leia dois n�meros calcule o resultado da multiplica��o de um pelo
outro sem utilizar a opera��o de multiplica��o (ou seja, utilizando apenas soma)*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeroUm, numeroDois, contador, soma=0;
	printf("---------------------------------------Programa de calcular a multiplica��o---------------------------------------------\n");
	printf("Digite o valor do primeiro n�mero:");
	scanf("%d", &numeroUm);
	fflush(stdin);
	printf("Digite o valor do segundo n�mero:");
	scanf("%d", &numeroDois);
	fflush(stdin);
	for(contador=1; contador<=numeroDois; contador++){
		soma=soma+numeroUm;
		}
	printf("O resultado da multiplica��o �: %d\n", soma);
	system("pause");
	return 0;
}
