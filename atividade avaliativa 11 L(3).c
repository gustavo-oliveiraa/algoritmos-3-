/*11. Você foi escolhido para fazer um algoritmo para informar o vencedor de um concurso de
piadas. Estarão concorrendo ao prêmio 3 finalistas, cujos nomes serão fornecidos. A
quantidade de juízes será definida no dia da apuração e para cada juiz o algoritmo solicitará a
nota para cada candidato. A nota poderá variar de 0 (zero) a 100(cem). O algoritmo deverá
apresentar o nome e o total de pontos de cada concorrente e o nome e total de pontos do
vencedor após o voto de todos os juízes.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	char finalistaUm[50], finalistaDois[50], finalistaTres[50];
	int qntJuizes, notaUm, notaDois, notaTres, somaUm=0, somaDois=0, somaTres=0, contador;
	
	printf("-------------------------------------Algoritmo para o final do concurso de stand-up-------------------------------------");
	printf("Digite o nome do primeiro finalista:");
	fgets(finalistaUm, 50, stdin);
	fflush(stdin);
	printf("Digite o nome do segundo finalista:");
	fgets(finalistaDois, 50, stdin);
	fflush(stdin);
	printf("Digite o nome do terceiro finalista:");
	fgets(finalistaTres, 50, stdin);
	fflush(stdin);
	printf("Digite a quantidades de juizes:");
	scanf("%d", &qntJuizes);
	fflush(stdin);
	
	for(contador=1; contador<=qntJuizes; contador++){
	do{
		printf("Digite a nota do primeiro candidato:");
		scanf("%d", &notaUm);
		fflush(stdin);
		if(notaUm<0 || notaUm>100)
		printf("As notas só podem ser de 0 a 100.\n");
		else{
		somaUm = somaUm + notaUm;
		printf("Nota computada com sucesso.\n");
	    }
	}while(notaUm<0 || notaUm>100);
    }
    
	for(contador=1; contador<=qntJuizes; contador++){
	do{
		printf("Digite a nota do segundo candidato:");
		scanf("%d", &notaDois);
		fflush(stdin);
		if(notaDois<0 || notaDois>100)
		printf("As notas só podem ser de 0 a 100.\n");
		else{
		somaDois = somaDois + notaDois;
		printf("Nota computada com sucesso.\n");
	    }
	}while(notaDois<0 || notaDois>100);
    }
	
	for(contador=1; contador<=qntJuizes; contador++){
	do{
	    printf("Digite a nota do terceiro candidato:");
		scanf("%d", &notaTres);
		fflush(stdin);
		if(notaTres<0 || notaTres>100)
		printf("As notas só podem ser de 0 a 100.\n");
		else{
		somaTres = somaTres + notaTres;
		printf("Nota computada com sucesso.\n");
	    }
	}while(notaTres<0 || notaTres>100);
	}
	system("cls");
	
	printf("Nome: %s\n", finalistaUm);
	printf("Nota: %d\n", somaUm);
	printf("Nome: %s\n", finalistaDois);
	printf("Nota: %d\n", somaDois);
	printf("Nome: %s\n", finalistaTres);
	printf("Nota: %d\n", somaTres);
	
	if(somaUm > somaDois && somaUm > somaTres){
	printf("O vencedor é: %s.\n", finalistaUm);
	printf("Com: %d de pontos.\n", somaUm);
    }
	else if(somaDois > somaUm && somaDois > somaTres){
	printf("O vencedor é: %s.\n", finalistaDois, somaDois);
	printf("Com: %d de pontos.\n", somaTres);
    }
	else{
	printf("O vencedor é: %s.\n", finalistaTres, somaTres);
	printf("Com: %d de pontos.\n", somaTres);
    }
	
	system("pause");
	return 0;
}
