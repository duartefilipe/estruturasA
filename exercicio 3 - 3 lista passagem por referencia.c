/*

3. Desenvolva um algoritmo que fa�a a leitura de dois n�meros inteiros e chame uma
fun��o para verificar se s�o valores primos. Caso n�o sejam, altere os valores das
vari�veis para armazenar os pr�ximos primos a partir dos valores lidos. Exemplo:
valores lidos: x = 4 e y = 9. (N�o s�o primos)
x = 5 e y = 11 (as vari�veis recebem estes valores, pois 5 � o pr�ximo primo
depois de 4 e 11 � o pr�ximo primo depois de 9) 

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

