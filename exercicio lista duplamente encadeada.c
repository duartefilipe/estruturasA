/*

Desenvolva um algoritmo que permita inserir elementos na �ltima posi��o de uma lista duplamente encadeada.

Desenvolva um algoritmo que implemente uma lista circular duplamente encadeada.

Desenvolva um algoritmo para permitir a inclus�o ordenada de elementos na lista.

Desenvolva um algoritmo para impedir inclus�o de valores repetidos.

Pesquise sobre aplica��es de listas duplamente encadeadas


*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct duplamente{
	int info;
	struct duplamente *ant;
	struct duplamente *prox;
};
typedef struct duplamente Lista;


Lista *inserir(Lista *l, int v){
	Lista *novo = (Lista*) malloc (sizeof(Lista));
		novo->info = v;
		novo->prox = lista;
		novo->ant = NULL;
			if ( lista != NULL) {
				lista ->ant = novo;
			}
	return novo;

}

main ()
{
	Lista *L;
	L = NULL;
	int valor;
	
	printf("informe um valor: \n");
	scanf("%d", &valor);	
	L = insere (L, valor);
	
	
	
system("pause");
}


