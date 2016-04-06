#include<stdlib.h>
#include<stdio.h>
#include<math.h>


struct Reg{
	char nome[20];
	int idade;
	float peso;
	struct encadeada *prox;

}p;
typedef struct Reg Reg;

Reg *inserir(Reg *r){

    Reg *novo;
    int idade;
    char nome[20];
    float peso;

    novo=(Reg*)malloc(sizeof(Reg));

    printf("Informe o nome:\n");
    scanf("%d", &nome);
    novo->nome=nome;
    novo->prox=r;
    
    printf("Informe o idade:\n");
    scanf("%d", &idade);
    novo->idade=idade;
    novo->prox=r;
    
    printf("Informe o valor:\n");
    scanf("%d", &peso);
    novo->peso=peso;
    novo->prox=r;

    return novo;
}


main(){

	
	Reg *r;
    char x;
	gets(p.nome);
	p.idade;
	p.peso;
	
	printf("Deseja inserir? s/n\n");
    scanf("%c", &x);

    while(x=='s')
    {
    r =inserir(r);

    printf("Inserir? s/n\n");
    getchar();
    scanf("%c", &x);

    }
	

	
	Reg *ptrpac;
	ptrpac = (Reg*)malloc(sizeof(Reg));
	ptrpac=&p;
		
	printf("\nnome: %s \n idade: %d \n peso: %.2f \n", p.nome, p.idade, p.peso);
	
	
system("pause");
	
}
