/*

Desenvolver um algoritmo que leia dois valores inteiros. Estes
valores devem ser passados por referência para uma função
que verificará se são pares. Caso sejam pares, deve-se
adicionar 5 a cada um deles. Caso contrário, adicionar 1. Os
novos valores das variáveis devem ser apresentadas na função
main.
• Depois, chame outra função utilizando passagem de
parâmetros por referência, para recuperar os valores iniciais
das variáveis. Os valores iniciais devem ser apresentados na
função main.

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
