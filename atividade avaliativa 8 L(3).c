/*8. Um mercador quer fazer um aumento em todos os seus produtos de 10%. Fa�a diferentes
algoritmos (um para cada estrutura de repeti��o) que leia a identifica��o e o pre�o de cada
produto e calcule e escreva a identifica��o e o novo pre�o ap�s o aumento.
Considere as seguintes situa��es:
a) o mercador informa o n�mero de produtos que possui antes de entrar com o pre�o
dos produtos
b) o mercador informa produto a produto e voc� deve perguntar se tem mais algum
produto a ser calculado o aumento
c) o pre�o do �ltimo produto fornecido pelo mercador � -1*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int quantidadeProdutos, contador; 
    char idProduto[20], auxiliar;
    float precoAntigo, novoPreco;
    
    printf("Informe a quantidade de produtos que ser� calculada:");
    scanf("%d", &quantidadeProdutos);
    fflush(stdin);
    
	for(contador=1; contador<=quantidadeProdutos; contador++){
    	printf("\nInforme a identifica��o do produto %d:", contador);
    	fgets(idProduto, 20, stdin);
    	fflush(stdin);
    	
		if(contador<=quantidadeProdutos){
    		printf("\nInforme o pre�o do produto:");
    		scanf("%f", &precoAntigo);
    		fflush(stdin);
    		
			novoPreco = precoAntigo * 1.1;
    		
			printf("\nO produto %s.", idProduto);
			printf("\nO novo pre�o do produto � %.2f.", novoPreco);
    		
    		printf("\nDeseja informar outro produto [S|N]?");
    		scanf("%c", &auxiliar);
			fflush(stdin);
		
			auxiliar = toupper(auxiliar);
			
			do{
				if(auxiliar != 'S' && auxiliar!= 'N')
				printf("\nOp��o inv�lida.");
			}while(auxiliar != 'S' && auxiliar!= 'N');
			
		}else
			printf("\nO �ltimo produto possui o valor igual a -1.");
		
		if(auxiliar == 'N') {
			contador = quantidadeProdutos;
		}
	}
    	
    system("pause");
    return 0;
}
