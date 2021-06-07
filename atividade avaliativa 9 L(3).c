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
	int contador=1, idade, maiorIdade;
	char sexo, corOlhos[9], corCabelos[9];
	float mulherVerdesLoira=0, porcentagem;
	
	do{
		printf("Digite o sexo da pessoa %d M (masculino) ou F (feminino):", contador);
		scanf("%c", &sexo);
		fflush(stdin);
		
		sexo = toupper(sexo);

		printf("Digite a cor dos olhos da pessoa %d com azuis, verdes, castanhos ou pretos:", contador);
		scanf("%s", &corOlhos);
		fflush(stdin);

		printf("Digite a cor dos cabelos da pessoa %d com loiros, castanhos ou pretos:", contador);
		scanf("%s", &corCabelos);
		fflush(stdin);
 
		printf("Digite a idade da pessoa %d, em anos:", contador);
		scanf("%d", &idade);
		fflush(stdin);
		
		system("cls");
		
		if((idade >= 18 || idade <=35) && sexo == 'F' && strcmp(corOlhos, "verdes")==1 && strcmp(corCabelos, "loiros")==1)   
			mulherVerdesLoira++;   
			   
		if(contador == 1)
   			maiorIdade = idade;
   		if(maiorIdade < idade)
   			maiorIdade = idade;
   				
   		contador++;
    
   }while(idade>=1);
   
	porcentagem = (mulherVerdesLoira/contador)*100;
   
	printf("Pesquisa completa, obrigado por contribuir.\n");
	printf("A maior idade dos habitantes pesquisados é: %d anos.\n", maiorIdade);
	printf("A porcentagem de habitantes do sexo feminino, com idade entre 18 e 35 anos, olho verde e cabelo loiro é de: %.1f%\n", porcentagem);
	
	system("pause");
	return 0;
}
