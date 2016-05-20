/*

1. Desenvolva um algoritmo com uma função recursiva que permita inverter um número inteiro N. Ex: 123 – 321.

*/

#include<stdio.h>

int inverte(int a){
	if(a == 0){
		return a;
	}
	else{
		printf("%d", a % 10);
		a = a / 10;
     	return inverte(a);
     	
	}
}
main(){
	int num;

	printf("informe um numero: ");
	scanf("%d", &num);
	
	inverte(num);
	printf("\n");

system("pause");
}
