/*Criar uma fun��o recursiva para calcular o somat�rio dos
n�meros positivos at� o valor N recebido por par�metro. A
fun��o deve retornar o resultado ao programa principal, onde
ser� impresso.
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
