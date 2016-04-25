/*Desenvolva um algoritmo que permita inserir elementos na primeira posição de uma lista duplamente encadeada.*/

#include<stdio.h>
#include<stdlib.h>

struct lista{

    int info;
    struct lista *prox;
    struct lista *ant;
};
typedef struct lista lista;

lista *insere(lista *l){

    lista *novo;
    int valor;

    printf("Informe valor:\n");
    scanf("%d", &valor);

    novo=(lista*) malloc(sizeof(lista));

    novo->ant=NULL;
    novo->info =valor;
    novo->prox=l;

    if(l!=NULL)
    {
        novo->ant=l;
        l->prox=novo;
        novo->prox=NULL;
    }

    return novo;

}

void imprimir(lista *l){

    lista *p;
    p=l;

    printf("\n");
    while( p != NULL){
        printf("l: %d ", p->info);
        p=p->ant;
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
