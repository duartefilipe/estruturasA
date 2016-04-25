/*

1. Faça um programa que receba dois valores e, utilizando ponteiros, retorne o maior e
menor deles. O programa deve ter um controle sobre valores iguais.

*/

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>


void verificamaior(int *x, int *y){
	if(*x > *y){
		printf("o maior valor eh: %d \n", *x);
	}
	else if(*y > *x){
		printf("o maior valor eh: %d \n", *y);
	}
	else if(*x == *y){
		printf("valores iguais \n");
		
	}
}

void verificamenor(int *x, int *y){
	if(*x < *y){
		printf("o menor valor eh: %d \n", *x);
	}
	else if(*y < *x){
		printf("o menor valor eh: %d \n", *y);
	}
	
	
}

main(){
	int a, b;
	
	printf("informe o valor de A: ");
	scanf("%d", &a);
	printf("informe o valor de B: ");
	scanf("%d", &b);
	
	verificamaior(&a, &b);
	verificamenor(&a, &b);
	
system("pause")	;
}
