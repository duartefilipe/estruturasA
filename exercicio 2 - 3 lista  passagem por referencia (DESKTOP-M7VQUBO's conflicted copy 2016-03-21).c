/*

2. Desenvolver um programa que possua a função alteraValores() para realizar a troca
dos valores de duas variáveis. Essa função recebe os endereços das variáveis passadas
pela função main(), armazenando-os nos ponteiros p1 e p2. Dentro da função, trocamse
os conteúdos dos endereços, retornando para a função chamadora, onde deverão
ser impressos

*/


#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void alteraValores(int *x, int *y){
	
	int *px, *py;
	px = x;
	py = y;
	
	printf("informe o valor de A: ");
	scanf("%d", &x);
	printf("informe o valor de B: ");
	scanf("%d", &y);
	
	
	
	printf("\n");
	
}

main(){
	
	int a, b;
	
	printf("informe o valor de A: ");
	scanf("%d", &a);
	printf("informe o valor de B: ");
	scanf("%d", &b);
	printf("\n");
	
	alteraValores(&a, &b);
	
	printf("o novo valor de A eh: %d \n", a);
	printf("o novo valor de B eh: %d \n", b);
	
system("pause")	;
}
