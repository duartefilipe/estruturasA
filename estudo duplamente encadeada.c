	#include<stdio.h>
#include<stdlib.h>

struct lista{
	struct lista *prox;
	struct lista *ant;
	int info;
};
typedef struct lista lista;

lista *insere(lista *l){
	int valor;
	lista *novo;
	lista *p;
	p = l;
	
	printf("informe o valor: \n");
	scanf("%d", &valor);
	
	novo = (lista*) malloc (sizeof(lista));
	novo->info = valor;
	novo->prox = NULL;
	novo->ant = NULL;
	
	if(l == NULL){
		return novo;
	}
	
	while(p->prox != NULL){
		p=p->prox;
	}
	
	
	novo->ant = p;
	p->prox = novo;
	novo->prox = NULL;
	
	return l;
}

lista *deleta(lista *l, int valor){
	lista *p;

	
for(p = l; p != NULL; p=p->prox){

		
		if(p->prox == NULL){
			printf("valor nao encontrado");
		}
	
		if (p->info == valor){
			p->ant->prox = p->prox;
			p->prox->ant = p->ant;
		}
		
		
	}
	free(p);
	return l;

	
}

void imprime(lista *l){
	lista *p;
	for(p = l; p != NULL; p=p->prox){
		printf(" %d ", p->info);
	}
}

main(){
	lista *l = NULL;
	char op;
	op = 's';
	int del;
	
	while( op == 's'){
		
		l = insere(l);
		printf("deseja inserir um valor: s/n ");
		getchar();
		scanf("%c", &op);
	}
	
	imprime(l);
	
	printf("informe um valor para deletar: ");
	scanf("%d", &del);
	l = deleta(l, del);
	
	imprime(l);

system("pause");
	
}
