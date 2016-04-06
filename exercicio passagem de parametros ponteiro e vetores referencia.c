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


#include<stdio.h>
#include<conio.h>
#include<string.h>

void verifica(int *a, int *b){
		
		if (*a % 2 == 0 && *b % 2 == 0){
			*a = *a+5;
			*b = *b+5;
		}
		else if (*a % 2 ==0 && *b % 2 != 0){
			*a = *a+5;
			*b = *b-1;
		}
		else if (*a % 2 !=0 && *b % 2 == 0){
			*a = *a-1;
			*b = *b+5;
		}
		else if (*a % 2 !=0 && *b % 2 != 0){
			*a = *a-1;
			*b = *b-1;
		}
		
}

void recupera(int *a, int *b){
	
	if (*a % 2 == 0 && *b % 2 == 0){
			*a = *a+1;
			*b = *b+1;
		}
		else if (*a % 2 ==0 && *b % 2 != 0){
			*a = *a+1;
			*b = *b-5;
		}
		else if (*a % 2 !=0 && *b % 2 == 0){
			*a = *a-5;
			*b = *b+1;
		}
		else if (*a % 2 !=0 && *b % 2 != 0){
			*a = *a-5;
			*b = *b-5;
		}
	
}

main(){
	int i, v1, v2;
	
		printf("informe o valor 1: \n");
		scanf("%d", &v1);
		printf("informe o valor 2: \n");
		scanf("%d", &v2);
	
	verifica(&v1, &v2);
	
	printf("valor 1 alterado eh: %d \n", v1);
	printf("valor 2 alterado eh: %d \n", v2);

	recupera(&v1, &v2);
	
	printf("valor 1 normal : %d \n", v1);
	printf("valor 2 normal : %d \n", v2);

	
system("pause");
}
