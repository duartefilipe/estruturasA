#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int insere (int n, int *vet){
	
	int i;
	
	
	if(vet != NULL){
		printf("informe os elemmentos do vetor: \n");
		for(i = 0; i = n; i++){
		scanf("%d", &vet[i]);
		}
		
		printf("\n vetor: " );
		
		for(i = 0; i< n; i++){
		printf("%d", *(vet + i));
		}
	}
	
	else{
		printf("memoria insuficiente\n");
		free(vet);
	}
	
}

main(){

	int  *vet, n, i;
	printf("informe o tamanho do vetor: \n");	
	scanf("%d", &n);
	vet = (int*) malloc (n * sizeof (int));
	insere(n, vet);
	
	
system("pause");
}
