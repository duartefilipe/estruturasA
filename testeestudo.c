#include<stdio.h>
#include<stdlib.h>

struct lista{
	struct lista *prox;
	int info;
};
typedef struct lista lista;

lista *insere(lista *l){
	int valor = NULL;
	lista *p;
	lista *novo;
	p = l;
	
	printf("informe um valor: ");
	scanf("%d", &valor);
	
	novo = (lista*) malloc(sizeof(lista));
	novo->info = valor;
	novo->prox = l;
	
	return novo;
	
}

void imprime(lista *l){
	lista *p;
	
	for(p = l; p != NULL; p=p->prox){
		printf(" %d ", p->info);
	}
}

lista *deleta(lista *l, int del){
	lista *p;
	lista *ant = NULL;
	p = l;
	
	while(p != NULL && p->info != del){
		ant = p;
		p = p->prox;
	}
	if(p == NULL){
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

main(){
	lista *l= NULL;
	char op;
	op = 's';
	int del;
	
	while(op == 's'){
		l = insere(l);
		printf("deseja inserir um novo valor: s/n \n");
		getchar();
		scanf("%c", &op);
	}
	
	imprime(l);	
	
	printf("\ninforme um valor para deletar: ");
	scanf("%d", &del);
	
	l = deleta(l, del);
	
	imprime(l);	
	
	
system("pause");
}
