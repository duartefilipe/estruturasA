// ta errado

/*
Crie um vetor chamado vet com 5 posições;
• Escreva uma função para atribuir ao vetor os valores recebidos a partir do teclado;
• Crie funções (sempre usando ponteiros) para realizar as seguintes operações:
– Localizar o maior valor no vetor;
– Localizar o menor valor no vetor;
– Mostrar os números pares do vetor.
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
	
      int vet[5], i, aux;
      
      
      // inserir
      printf("informe 5 valores: \n");
      for (i = 0; i < 5; i++){
      	scanf ("%d", *(vet + i));
  	  }
  	  
  	//procurar maior valor
	for(i = 0; i< 5; i++){
  	  	if(vet[i] > vet[i+1]){
  	  		aux = vet[i];
  	  		vet[i]++;
		}
		else{
			aux = vet[i+1];
			i++;
		}
		
		printf("o maior valor eh: %d \n", aux);
  	}
  	
  	
  	//procurar menor valor
  	for(i = 0; i< 5; i++){
  	  	if(vet[i] < vet[i+1]){
  	  		aux = vet[i];
  	  		vet[i]++;
		}
		else{
			aux = vet[i+1];
			i++;
		}
		printf("o menor valor eh: %d \n", aux);
  	}
  	  
  	  
  	  
  	  
  	  // mostrar na tela
  	  for (i = 0; i < 5; i++){
  	  	printf("%d ", *(vet +i));
  	  }
      

system("pause");
}
      
