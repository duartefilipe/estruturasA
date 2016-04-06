/*

Crie um vetor de inteiros com 5 posições e adicione valores
digitados pelo usuário. Utilizando o método visto
anteriormente, mostre o conteúdo do vetor na tela.

*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
	
      int vet[5], i;
      printf("informe 5 valores:");
      for (i = 0; i < 5; i++){
      	scanf ("%d", (vet + i));
  	  }
  	  for (i = 0; i < 5; i++){
  	  	printf("%d ", *(vet +i));
  	  }
      

system("pause");
}
      
