/*

Fa�a um programa com uma fun��o que receba tr�s vari�veis do tipo CHAR atrav�s de
passagem de par�metro por refer�ncia. A fun��o deve verificar se as vari�veis s�o
vogais. Caso n�o sejam, a fun��o deve trocar estes valores por vogais. As novas letras
devem ser apresentadas na fun��o principal.

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
