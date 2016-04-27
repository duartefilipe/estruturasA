#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct id{
	char nome[20];
	char sobrenome[20];
	char apelido[20];
};
typedef struct id id;

struct fone{
	char tipo[10];
	int numero;
};
typedef struct fone fone;

struct end{
	char email[30];
	char residencial[50];
	char trabalho[30];
};
typedef struct end end;

struct contato{
	struct id pessoaID;
	struct fone pessoaF;
	struct end pessoaE;
	struct contato *prox;
	struct contato *ant;
};
typedef struct contato contato;


main(){
	
	int opc = 0;
	
	while(opc != 5){
		system("cls");
		printf("1. Insere\n");
		printf("2. Imprime\n");
		printf("3. Adicionar aos Favoritos\n");
		printf("4. Remover Contato\n");
		printf("5. Sair\n");
		printf("Opcao: ");
		scanf("%d", &opc);
		system("cls");
		
	/*	switch (opc){
			case(1):
					l = criaContato(l);
					break;
			
			case(2): imprimir(l, 1);
					 break;
					 
			case(3): novoFav(l, nova);
					 break;
			case(4): l = remover(l);
					 break;
		}
		*/
	}
}
