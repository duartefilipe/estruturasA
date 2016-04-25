#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

main(){
	int a, b;
	int *pa, *pb;
	
	printf("informe o valor de a: ");
	scanf("%d", &a);
	printf("informe o valor de b: ");
	scanf("%d", &b);
	
	pa = &a;
	pb = &b;
	
	if(pa > pb){
		printf("\nO endereco de A eh: %d e o endereco de B eh: %d \n\nEntao A esta mais adiante que B na memoria \n\n", *pa, pb);
	}
	else{
		printf("O endereco de A eh: %d e o endereco de B eh: %d \n\nEntao B esta mais adiante que A na memoria \n\n", pa, pb);
	}
		
system("pause")	;
	
}
