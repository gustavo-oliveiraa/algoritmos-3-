/*10. Fazer um algoritmo que leia n�meros inteiros at� que a quantidade lida seja 100 ou at� que
seja lido um n�mero negativo e mostrar a quantidade total de n�meros lidos.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int contador=1, numero;
    
	do{
        printf("Digite um n�mero inteiro:");
        scanf("%d", &numero);
        fflush(stdin);
        contador++;    
    }while(numero>=0 && contador<=100);
    
    printf("A quantidade de n�meros lidos foram: %d\n", contador);
    	
	system("pause");
    return 0;
}
