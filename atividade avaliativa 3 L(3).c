/*3. Fa�a um algoritmo que apresenta a menor altura entre 10 pessoas, usando apenas a repeti��o
enquanto.*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador=1, pessoas=10, altura, menor;
	
	while(contador <= pessoas){
		printf("Informe a altura da pessoa %d em cent�metros:", contador);
		scanf("%d", &altura);
		if(contador == 1)
		   menor = altura;
		if(menor > altura)
		   menor = altura;
		   contador++;
	}
	
	printf("A menor altura �: %d cm\n", menor);
		
	system("pause");
    return 0;
}
