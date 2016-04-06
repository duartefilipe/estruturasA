/*

Faça um programa com uma função que receba três variáveis do tipo CHAR através de
passagem de parâmetro por referência. A função deve verificar se as variáveis são
vogais. Caso não sejam, a função deve trocar estes valores por vogais. As novas letras
devem ser apresentadas na função principal.

*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void verifica(char *a, char *b, char *c){
	
	if(*a != 'a' && *a != 'e' && *a != 'i' && *a != 'o' && *a != 'u'){
		*a = 'a';		
	}
	else{
		*a = *a;
 	}
	if(*b != 'a' && *b != 'e' && *b != 'i' && *b != 'o' && *b != 'u'){
		*b = 'a';		
	}
	else{
		*b = *b;
	}
	if(*c != 'a' && *c != 'e' && *c != 'i' && *c != 'o' && *c != 'u'){
		*c = 'a';		
	}
	else{
		*c = *c;
	}
	
	
}

main(){
	int i; 
	char v1, v2, v3;
	
		printf("informe a variavel 1: \n");
		fflush(stdin);
		scanf("%d", &v1);
		printf("informe a variavel 2: \n");
		fflush(stdin);
		scanf("%d", &v2);
		printf("informe a variavel 3: \n");
		fflush(stdin);
		scanf("%d", &v3);
	
	verifica(&v1, &v2, &v3);
	
		printf("valor 1 alterado eh: %c \n", v1);
		printf("valor 2 alterado eh: %c \n", v2);
		printf("valor 2 alterado eh: %c \n", v3);
	
	
system("pause");
}
