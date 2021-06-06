/*8. Um mercador quer fazer um aumento em todos os seus produtos de 10%. Faça diferentes
algoritmos (um para cada estrutura de repetição) que leia a identificação e o preço de cada
produto e calcule e escreva a identificação e o novo preço após o aumento.
Considere as seguintes situações:
a) o mercador informa o número de produtos que possui antes de entrar com o preço
dos produtos
b) o mercador informa produto a produto e você deve perguntar se tem mais algum
produto a ser calculado o aumento
c) o preço do último produto fornecido pelo mercador é -1*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int quantidadeProdutos, contador; 
    char idProduto[20], auxiliar;
    float precoAntigo, novoPreco;
    
    printf("Informe a quantidade de produtos que será calculada:");
    scanf("%d", &quantidadeProdutos);
    fflush(stdin);
    
    for(contador=1; contador<=quantidadeProdutos; contador++){
    	printf("\nInforme a identificação do produto %d:", contador);
    	fgets(idProduto, 20, stdin);
    	fflush(stdin);
    	
	if(contador<=quantidadeProdutos){
    		printf("\nInforme o preço do produto:");
    		scanf("%f", &precoAntigo);
    		fflush(stdin);
    		
		novoPreco = precoAntigo * 1.1;
    		
		printf("\nO produto %s.", idProduto);
		printf("\nO novo preço do produto é %.2f.", novoPreco);
    		
    		printf("\nDeseja informar outro produto [S|N]?");
    		scanf("%c", &auxiliar);
		fflush(stdin);
		
		auxiliar = toupper(auxiliar);
			
		do{
			if(auxiliar != 'S' && auxiliar!= 'N')
			printf("\nOpção inválida.");
		}while(auxiliar != 'S' && auxiliar!= 'N');
			
		}else
			printf("\nO último produto possui o valor igual a -1.");
		
		if(auxiliar == 'N') {
			contador = quantidadeProdutos;
		}
	}
    	
    system("pause");
    return 0;
}
