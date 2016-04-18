#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;

Lista *inserir(Lista *l){

    Lista *novo;
    int valor=0;

    novo=(Lista*)malloc(sizeof(Lista));

    printf("Informe o valor:\n");
    scanf("%d", &valor);
    novo->info=valor;
    novo->prox=l;

    return novo;
}
void imprime (Lista *l){
	Lista *p;
	
	for(p = l; p != NULL; p = p->prox)
	printf("%d - ", p->info);
}

main(){
	
	Lista *l = NULL;
	int v;
	char x = 's';
	
while(x=='s'){
       l =inserir(l);

    printf("Inserir? s/n\n");
    getchar();
    scanf("%c", &x);

    }	
	imprime(l);
		
	
	
system("pause");
}
