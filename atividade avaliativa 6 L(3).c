/*6. Fa�a um algoritmo que receba o sexo e a nota dos alunos de uma classe e apresente a m�dia
das notas dos alunos e a m�dia das notas das alunas. O algoritmo dever� apresentar os
resultados solicitados quando for fornecida uma nota negativa.*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int contador, quantEstudantes, alunos=0, alunas=0;
	float notaEstudante, notasAlunos=0, notasAlunas=0, mediaAlunos=0, mediaAlunas=0;
	char sexoEstudante;
	
	printf("------------------------Calculo da m�dia dos alunos e alunas da classe!-------------------------------\n");
	
	printf("Digite quantos estudades s�o dessa classe:");
	scanf("%d", &quantEstudantes);
	fflush(stdin);
	
	for(contador=1; contador<=quantEstudantes; contador++){
	
			
			do{
				printf("Digite o sexo do(a) aluno(a) %d, M (masculino) ou F (feminino):", contador);
				scanf("%c", &sexoEstudante);
				fflush(stdin);
				sexoEstudante = toupper(sexoEstudante);
			}while(sexoEstudante != 'M' && sexoEstudante != 'F');
			
			do{
				printf("Digite a nota do(a) aluno(a) %d, de (0) a (10):", contador);
				scanf("%f", &notaEstudante);
				fflush(stdin);
			}while(notaEstudante < 0 && notaEstudante > 10);
				
			if(sexoEstudante == 'M'){
				alunos++;
				notasAlunos = notasAlunos + notaEstudante;
			}
			else if(sexoEstudante == 'F'){
				alunas++;
				notasAlunas = notasAlunas + notaEstudante;
			}
		
	}
	
	mediaAlunos = notasAlunos/alunos;
	mediaAlunas = notasAlunas/alunas;
	
	printf("A m�dia dos alunos da classe: %.2f\n", mediaAlunos);
	printf("A m�dia das alunas da classe: %.2f\n", mediaAlunas);
	
	system("pause");
	return 0;
}
