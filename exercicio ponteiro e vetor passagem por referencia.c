/*

Desenvolver um algoritmo que leia dois valores inteiros. Estes
valores devem ser passados por refer�ncia para uma fun��o
que verificar� se s�o pares. Caso sejam pares, deve-se
adicionar 5 a cada um deles. Caso contr�rio, adicionar 1. Os
novos valores das vari�veis devem ser apresentadas na fun��o
main.
� Depois, chame outra fun��o utilizando passagem de
par�metros por refer�ncia, para recuperar os valores iniciais
das vari�veis. Os valores iniciais devem ser apresentados na
fun��o main.

*/


#include<stdlib.h>
#include<stdio.h>
#include<conio.h>


void verifica (int *x, int *y){
	if(*x % 2 == 0 && *y % 2 == 0){
		*x = *x + 5;
		*y = *y + 5;
	}
	else if(*x % 2 != 0 && *y % 2 == 0){
		*x = *x + 1;
		*y = *y + 5;
	}
	else if(*x % 2 == 0 && *y % 2 != 0){
		*x = *x + 5;
		*y = *y + 1;
	}
	else if(*x % 2 != 0 && *y % 2 != 0){
		*x = *x + 1;
		*y = *y + 1;
	}
}


void retornaValor (int *x, int *y){
	if(*x % 2 != 0 && *y % 2 != 0){
		*x = *x - 5;
		*y = *y - 5;
	}
	else if(*x % 2 == 0 && *y % 2 != 0){
		*x = *x - 1;
		*y = *y - 5;
	}
	else if(*x % 2 != 0 && *y % 2 == 0){
		*x = *x - 5;
		*y = *y - 1;
	}
	else if(*x % 2 == 0 && *y % 2 == 0){
		*x = *x - 1;
		*y = *y - 1;
	}
	
}

main(){
	int a, b;
	printf("informe o valor de a: ");
	scanf("%d", &a);
	printf("informe o valor de b: ");
	scanf("%d", &b);
	
	verifica(&a, &b);
	
	printf("\n");
	printf("|------------------------|\n");
	printf("|o novo valor de A eh: %d |\n", a);
	printf("|o novo valor de B eh: %d |\n", b);
	printf("|------------------------|\n");
	printf("\n");
	
	retornaValor(&a, &b);
	
	printf("\n");
	printf("|---------------------------|\n");
	printf("|o valor inicial de A eh: %d |\n", a);
	printf("|o valor inicial de B eh: %d |\n", b);
	printf("|---------------------------|\n");
	printf("\n");
	
	
	
	
	
	
	
system("pause");
}
