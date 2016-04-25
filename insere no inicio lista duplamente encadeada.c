/*insere em uma lista duplamente encadeada no inicio*/

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

void imprimir(lista *l){

    lista *p;
    p=l;
	printf("Lista \n");
    while( p != NULL){
        printf(" %d \n", p->info);
        p=p->prox;
    }
}

main(){

    char x;
    lista *l=NULL;


    printf("Inserir: \n");
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

