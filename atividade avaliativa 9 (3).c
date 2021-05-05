/*9. Uma pesquisa sobre algumas características físicas da população de uma determinada região
coletou os seguintes dados, referentes a cada habitante:
a) sexo (masculino, feminino);
b) cor dos olhos (azuis, verdes, castanhos, pretos);
c) cor dos cabelos (loiros, castanhos, pretos);
d) idade em anos.
Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade
igual a –1. Fazer um algoritmo que determine e escreva:
a) a maior idade dos habitantes pesquisados;
b) a porcentagem de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos
inclusive e que tenham olhos verdes e cabelos loiros.*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int qntHabitantes, idade, contador;
	char sexo, corOlhos[15], corCabelo[15];
	
	printf("Digite a quantidade de habitantes:");
	scanf("%d", &qntHabitantes);
	fflush(stdin);
	
	for(contador=1; contador<=qntHabitantes; contador++){
		do{
			printf("Digite o sexo da pessoa %d F (feminino) ou M (masculino):", contador);
			scanf("%c", &sexo);
			fflush(stdin);
			sexo = toupper(sexo);
			if(sexo != 'M' && sexo != 'F')
			printf("Sexo inválido.\n");
			else
			printf("Sexo aceito com sucesso.\n");
    }while(sexo != 'M' && sexo != 'F');
	
	do{
			printf("Digite a cor dos olhos da pessoa %d, com azuis, verdes, castanhos ou pretos:", contador);
			scanf("%s", &corOlhos);
			fflush(stdin);
			if(strlen(corOlhos)<=2)
			printf("Cor de olhos inválidos.\n");
			else
			printf("Cor de olhos aceito com sucesso.\n");
    }while(strlen(corOlhos)<=2);
    
	do{
			printf("Digite a cor do cabelo da pessoa %d, com loiros, castanhos ou pretos:", contador);
			scanf("%s", &corCabelo);
			fflush(stdin);
			if(strlen(corCabelo)<=2)
			printf("Cor de cabelo inválido.\n");
			else
			printf("Cor de cabelo aceito com sucesso.\n");
    }while(strlen(corCabelo)<=2);
	
	do{
			printf("Digite a idade da pessoa %d, em anos:", contador);
			scanf("%d", &idade);
			fflush(stdin);
			if(idade<1 || idade>120)
			printf("Idade inválida.\n");
			else
			printf("Idade aceita com sucesso.\n");
    }while(idade<1 || idade>120);
    }
	printf("");
	
	system("pause");
	return 0;
}
