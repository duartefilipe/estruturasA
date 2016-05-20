/*Criar uma função recursiva para calcular o somatório dos
números positivos até o valor N recebido por parâmetro. A
função deve retornar o resultado ao programa principal, onde
será impresso.
*/

#include<stdio.h>
int soma(int x){
	
	if(x == 1){
		return 1;
	}
	else{
		x = x + soma(x - 1);
		return x;
	}
return x;
	
}

main(){
	int valor;
	
	printf("informe um valor: ");
	scanf("%d", &valor);
	
	valor = soma(valor);
	printf("\n");
	printf(" %d", soma);
	printf("\n");
	getch();
	
	
	
system("pause");
}
