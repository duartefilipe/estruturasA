//teste de lista simplismente encadeada 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct lista{
	struct lista *prox;
	struct lista *ant;
	int info;
};
typedef struct lista lista;

lista *insere(lista *l){

    lista *novo;
    int valor;

    novo=(lista*) malloc(sizeof(lista));


    printf("Informe o valor :\n");
    scanf("%d", &valor);

    novo->info=valor;
    novo->prox=l;
    novo->ant=NULL;

    if(l != NULL){
        l->ant=novo;
    }

    return novo;

}

void imprime(lista *l){

    lista *p;
	
	for(p = l; p != NULL; p = p->prox){
		printf(" %d \n", p->info);
	}
	
}

lista *busca(lista *l){
	int valor;
	lista *p;
	
	printf("informe um valor para procurar na lista: \n");
	scanf("%d", &valor);
	
	for(p = l; p != NULL; p = p->prox){
		if(p->info == valor){
			return p;
		}
	}
	return NULL;
}

lista *retira(lista *l, int v){
	lista *p;
	
	p = busca(l, v);
	
	if(p == NULL)
	return l;
	
	if (l == p){
		l = p->prox;
	}
	else{
		p->ant->prox = p->prox;
	}
	if(p->prox != NULL){
		p->prox->ant = p->pant;
		free(p);
		return l;
	}
}


main(){
	lista *l;
	l = NULL;
	char op;
	op = 's';
	
	while(op =='s'){
		
		l=insere(l);
		printf("Inserir: s/n  \n");
        getchar();
        scanf("%c", &op);
   }
	
	imprime(l);
	
	l = retira(l);
	imprime(l);
    
system("pause");
	
}
