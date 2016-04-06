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
