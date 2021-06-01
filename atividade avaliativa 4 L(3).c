/*4. Sendo H = 1/1+1/2+1/3+ ... +1/N. Prepare um algoritmo para calcular H sendo N fornecido
pelo usuário.*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, valorN;
	float valorH;
	
	printf("Digite o valor de N para calcularmos H:");
	scanf("%d", &valorN);
	fflush(stdin);
	
	valorH=0;

	for(contador=1; contador<=valorN; contador++){
		valorH = valorH + (1.0/contador);
	}

	printf("Valor de H é: %.4f\n", valorH);
	
	system("pause");
	return 0;
}
