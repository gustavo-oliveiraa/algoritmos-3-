/*10. Fazer um algoritmo que leia n�meros inteiros at� que a quantidade lida seja 100 ou at� que
seja lido um n�mero negativo e mostrar a quantidade total de n�meros lidos.*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, numero, soma=0;
	do{
		printf("Digite o n�mero:");
		scanf("%d", &numero);
		fflush(stdin);
		if(numero>0 && soma<100)
		soma = soma + numero;
		else
		printf("N�o � poss�vel continuar a progre��o.\n ");
	}while(numero>0 && soma<100);
	printf("O valor total de n�meros lidos %d", soma);
	system("pause");
	return 0;
}
