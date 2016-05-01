//teste de lista simplismente encadeada 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista lista;

lista *insere(lista *l){
	lista *novo;
    int valor=0;

    novo=(lista*)malloc(sizeof(lista));
	
	printf("informe um valor: \n");
	scanf("%d", &valor);
	
	novo->info = valor;
	novo->prox = l;
	
	return novo;
	
}

void imprime(lista *l){
	lista *p;
	
	for(p = l; p != NULL; p = p->prox){
		printf("%d ", p->info);
	}

	
}

lista *retira(lista *l, int valor){
	
	lista *ant = NULL;
	lista *p = l;
	
		
	while(p != NULL && p->info != valor){
		ant = p;
		p = p->prox;
	}
	if( p == NULL){
		return l;
	}
	if(ant == NULL){
		l = p->prox;
	}
	else{
		ant->prox = p->prox;
	}
	free(p);
	return l;
	
}

void pares(lista *l){
	lista *p;
	
	printf("\n\nos numeros pares da lista sao \n");
	for(p = l; p != NULL; p = p->prox){
		if(p->info % 2 == 0){
			printf("%d", p->info);
		}
	}
	
}




main(){
	
	lista *l = NULL;
	int v;
	int valor;
	char x = 's';
	
while(x=='s'){
       l = insere(l);

    printf("Inserir? s/n\n");
    getchar();
    scanf("%c", &x);

    }	
	imprime(l);

	
	printf("\ninforme um valor para excluir: ");
	scanf("%d", &valor);
	
	l = retira(l, valor);
	
	imprime(l);
	pares(l);
	
	
system("pause");
}
