/*10. Fazer um algoritmo que leia números inteiros até que a quantidade lida seja 100 ou até que
seja lido um número negativo e mostrar a quantidade total de números lidos.*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, numero, soma=0;
	do{
		printf("Digite o número:");
		scanf("%d", &numero);
		fflush(stdin);
		if(numero>0 && soma<100)
		soma = soma + numero;
		else
		printf("Não é possível continuar a progreção.\n ");
	}while(numero>0 && soma<100);
	printf("O valor total de números lidos %d", soma);
	system("pause");
	return 0;
}
