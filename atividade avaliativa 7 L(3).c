/*7. Elabore um algoritmo que apresenta as compras de frutas efetuadas por usuário (quantidade
de frutas para cada tipo), sendo elas identificadas por meio de um número.
1 => ABACAXI
2 => MAÇA
3 => PERA
Usando a instrução faca...enquanto identifique quais as frutas desejadas por seu usuário,
lembrando que ele pode desejar somente um tipo de fruta ou mais que um.
Deve existir o cuidado na identificação correta das frutas, pois o feirante só possui estes três
tipos. Caso o usuário escolha uma fruta não existente deve ser notificado que a fruta não está
disponível e a solicitação deve ser feita novamente sobre qual fruta ele deseja.
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int frutaId; 
    int quantidadeAbacaxi=0, quantidadeMaca=0, quantidadePera = 0;
    char opcaoComprar;
    
do{
	printf("Na loja temos 3 tipos de frutas.\n");
    	printf("Abacaxi, representado pelo número (1).\n");
    	printf("Maça,    representado pelo número (2).\n");
    	printf("Pera,    representado pelo número (3).\n");
    	printf("Qual a numeração da fruta desejada, lembrando que as numerações são 1, 2 e 3:");
        scanf("%d", &frutaId);
        fflush(stdin);
        if(frutaId < 1 || frutaId > 3)
        	printf("Número da fruta não encontrada no sistema, tente novamente.\n");	
	else
		printf("Fruta encontrada.");
		
	switch(frutaId){
		case 1: quantidadeAbacaxi++; break;
		case 2: quantidadeMaca++; break;
		case 3: quantidadePera++; break; 
	}
				
	system("cls");	
		
	printf("Deseja escolher mais alguma fruta, ou adicionar mais uma unidade a fruta escolhida?\n");
	scanf("%c", &opcaoComprar);
    	fflush(stdin);

	}while(opcaoComprar == 's' || opcaoComprar == 'S');


printf("Você comprou %d abacaxi(s), %d maçã(s) e %d pera(s)", quantidadeAbacaxi, quantidadeMaca, quantidadePera);


    system("pause");
    return 0;
}
