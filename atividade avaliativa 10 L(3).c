/*10. Fazer um algoritmo que leia números inteiros até que a quantidade lida seja 100 ou até que
seja lido um número negativo e mostrar a quantidade total de números lidos.*/

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int contador=1, numero;
    
	do{
        printf("Digite um número inteiro:");
        scanf("%d", &numero);
        fflush(stdin);
        contador++;    
    }while(numero>=0 && contador<=100);
    
    printf("A quantidade de números lidos foram: %d\n", contador);
    	
	system("pause");
    return 0;
}
