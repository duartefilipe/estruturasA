/*

3. Desenvolva um algoritmo que faça a leitura de dois números inteiros e chame uma
função para verificar se são valores primos. Caso não sejam, altere os valores das
variáveis para armazenar os próximos primos a partir dos valores lidos. Exemplo:
valores lidos: x = 4 e y = 9. (Não são primos)
x = 5 e y = 11 (as variáveis recebem estes valores, pois 5 é o próximo primo
depois de 4 e 11 é o próximo primo depois de 9) 

*/


#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void verifica(int *x, int *y){
	int i;
	int cont;
 	for (i=1; i<=*x; ++i){
	if (*x % i == 0) {
	cont++;
	}


	if (cont<=2){
    	printf("\n Primo!\n");
	}
	else{
	printf("Nao e primo!\n");
	}
 	}

}


main(){
	int a;
	int b;

	printf("informe o valor de A: ");
	scanf("%d", &a);
	printf("informe o valor de B: ");
	scanf("%d", &b);

	verifica(&a, &b);
	
system("pause")	;
}

