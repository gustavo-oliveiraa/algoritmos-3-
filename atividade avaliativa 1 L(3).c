/*1. Construa um algoritmo que calcule o fatorial de um n�mero usando a estrutura PARA...FA�A,
baseando-se na defini��o matem�tica (N! = 1x2x3x...x N-1 x N e 0! = 1 por defini��o)*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int fatorial=1, numero, contador;

	printf("---------------------------------------Programa para calcular o fatorial.--------------------------------------------\n");
	
	printf("Insira um n�mero para o qual deseja calcular o fatorial: ");
	scanf("%d", &numero);
	fflush(stdin);
	if(numero<0){
		printf("Somente n�meros inteiros positivos.\n");
	}else if(numero==0){
		printf("Fatorial de 0 �: 1\n");
	}else{		
		for(contador=1; contador<=numero; contador++){
			fatorial = fatorial * contador;
		}
	printf("Fatorial calculado: %d\n", fatorial);
	}
	
	system("pause");
    return 0;
}
