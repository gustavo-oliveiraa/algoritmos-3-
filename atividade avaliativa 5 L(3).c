/*5. Elabore um algoritmo para calcular N! (fatorial de N) sendo que o valor inteiro de N é
fornecido pelo usuário. Sabe-se que: N! = 1x2x...x N-1 x N e 0! = 1. Use o enquanto...faça.*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int fatorial=1, valorN, contador=1;

	printf("---------------------------------------Programa para calcular o fatorial.--------------------------------------------\n");
	
	printf("Insira o valor que deseja calcular o fatorial: ");
	scanf("%d", &valorN);
	fflush(stdin);
	
	if(valorN<0){
		printf("Somente números inteiros positivos.\n");
	}else if(valorN==0){
		printf("Fatorial de 0 é: 1\n");
	}else{
		while(contador <= valorN){
		fatorial = fatorial * contador;
		contador++;
		}
		printf("Fatorial calculado: %d\n", fatorial);
	}
	
    system("pause");
    return 0;
}
