#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct lista{

    int info;
    struct lista *prox;
    struct lista *ant;
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
/*
//imprime do ultimo pro primeiro
void imprimir(lista *l){

    lista *p;
    p=l;

    printf("\n");
    while( p->prox != NULL){
        p=p->prox;
    }
    while(p != NULL){
		    printf("l: %d ", p->info);
		    p=p->ant;
	}
}

*/
// imprime do primeiro pro ultimo

void imprimir(lista *l){
     lista *p;
	 p = l;
     while(p!=NULL){
             printf("numero %d\n",p->info);
             p=p->prox;
		}
}


main(){
	
	 char x;
    lista *l=NULL;


    printf("Inserir:\n");
    scanf("%c", &x);

    while(x =='s')
    {
	l=insere(l);

        printf("Inserir:\n");
        getchar();
        scanf("%c", &x);

    }
    imprimir(l);
	
	
system("pause");
}
