/*7. Elabore um algoritmo que apresenta as compras de frutas efetuadas por usu�rio (quantidade
de frutas para cada tipo), sendo elas identificadas por meio de um n�mero.
1 => ABACAXI
2 => MA�A
3 => PERA
Usando a instru��o faca...enquanto identifique quais as frutas desejadas por seu usu�rio,
lembrando que ele pode desejar somente um tipo de fruta ou mais que um.
Deve existir o cuidado na identifica��o correta das frutas, pois o feirante s� possui estes tr�s
tipos. Caso o usu�rio escolha uma fruta n�o existente deve ser notificado que a fruta n�o est�
dispon�vel e a solicita��o deve ser feita novamente sobre qual fruta ele deseja.
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
    	printf("Abacaxi, representado pelo n�mero (1).\n");
    	printf("Ma�a,    representado pelo n�mero (2).\n");
    	printf("Pera,    representado pelo n�mero (3).\n");
    	printf("Qual a numera��o da fruta desejada, lembrando que as numera��es s�o 1, 2 e 3:");
        scanf("%d", &frutaId);
        fflush(stdin);
        if(frutaId < 1 || frutaId > 3)
        	printf("N�mero da fruta n�o encontrada no sistema, tente novamente.\n");	
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


printf("Voc� comprou %d abacaxi(s), %d ma��(s) e %d pera(s)", quantidadeAbacaxi, quantidadeMaca, quantidadePera);


    system("pause");
    return 0;
}
