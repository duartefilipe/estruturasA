/*
2. Faça uma função recursiva que permita somar os elementos de um vetor de N valores inteiros.
*/

#include<stdio.h>
	

main(){
	int vet[5], i;
	printf("informe os valores do vetor: ");
	for(i = 0; i < 5; i++){
		scanf("%d ", &vet[i]);
	}
	
	for(i = 0; i < 5; i++){
		printf("%d ", vet[i]);
	}
	

system("pause");
}	
