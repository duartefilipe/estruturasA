#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//como ele mandou
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

id *iniciaI(){
	return NULL;
}
fone *iniciaF(){
	return NULL;
}
end *iniciaE(){
	return NULL;
}
contato *iniciaC(){
	return NULL;
}

/*
struct Agenda{
	char nome[20], sNome[50], apelido[20], favorito;
	struct Agenda *ant, *prox;
};
typedef struct Agenda agenda;
struct Lista{
	char letra;
	struct Agenda *Letra;
	struct Lista *ant, *prox;
};
typedef struct Lista lista;

lista *iniciaL(){
	return NULL;
}
agenda *iniciaA(){
	return NULL;
}

*/
int menuFav(){
	int x = 1;
	return x;
}
lista *procuraLetra(lista *l, char a){
	lista *busca;
		for(busca = l; busca != NULL; busca = busca->prox){//percorre toda lista
			if (busca->letra == a){//compara todas letras existem com a primeira letra do novo nome
				return busca;
			}
		}
		return NULL;
}
int menuImprimir(){
	int x;
		printf("1. Imprimir todos\n");
		printf("2. Imprimir Favoritos\n");
		printf("3. Imprimir letra especifica\n");
		printf("4. Voltar Menu Principal\n");
		printf("Opcao: ");
		scanf("%d", &x);
		return x;
	
}
void imprimir(lista *l, int s){
	lista *l1;
	agenda *a1;
	
	if (l == NULL){
		printf("Agenda Vazia");
	}
	
	int opc = 0;
	char caract, achou;
	
	while(opc != 4){
		if (s == 1){
			opc = menuImprimir();
		}else{
			opc = 1;
		}
		switch (opc){
			case(3): 
					printf("Qual letra deseja imprimir: ");
					fflush(stdin);
					scanf("%c", &caract);
					achou = 0;
					break;
		}
	
		if (opc != 4){
			for(l1 = l; l1 != NULL; l1 = l1->prox){
				for(a1 = l1->Letra; a1 != NULL; a1 = a1->prox){
					if ( opc == 1 ){
						if(a1->favorito == 's'){
							printf("(F) %s %s %s", a1->nome, a1->sNome, a1->apelido);
							printf("\n");
						}else{
							printf("( ) %s %s %s", a1->nome, a1->sNome, a1->apelido);
							printf("\n");
						}
					}
					if (opc == 2 ){
						if(a1->favorito == 's'){
							printf("(F) %s %s %s", a1->nome, a1->sNome, a1->apelido);
							printf("\n");
						}
					}	
					if (opc == 3 && a1->nome[0] == caract){
						achou = 1;
							if(a1->favorito == 's'){
								printf("(F) %s %s %s", a1->nome, a1->sNome, a1->apelido);
								printf("\n");
							}else{
								printf("( ) %s %s %s", a1->nome, a1->sNome, a1->apelido);
								printf("\n");
							}
					}
				}
			}
			if(opc == 3 && achou == 0){
				printf("Nao ha' contatos com essa letra");
			}
			fflush(stdin);
			getchar();
		}
		if (s == 2){
			opc = 4;
		}
	}
}
agenda *addFav(agenda *a){
	agenda *fav = a;
	if(a->favorito == 's'){
		while(fav->favorito =='s'&& fav->prox != NULL){
			fav = fav->prox;
		}
		if(fav->favorito == 'n'){
			a = fav->ant;
			return a;	
		}else{
			return fav;
		}
	}else{
		return a;
	}
}
void *novoFav(lista *l, agenda *a){
	lista *cabecaL;
	agenda *localiza, *cabecaA, *busca, *n;
	char nome[20], sobren[50];
	int verif = 0;
	
	imprimir(l, 2);
	printf("Qual deseja incluir aos favoritos?");
	printf("Nome: ");
	fflush(stdin);
	gets(nome);
	printf("Sobrenome: ");
	fflush(stdin);
	gets(sobren);
	cabecaL = procuraLetra(l, nome[0]);
	busca = cabecaL->Letra;	
	cabecaA = busca;		
		while (busca != NULL){//percorre toda lista
			if (strcmp(busca->nome, nome) == 0 && strcmp(busca->sNome, sobren) == 0  && busca->favorito != 's'){//compara todas letras existem com a primeira letra do novo nome
				localiza = busca;
			}
			busca = busca->prox;
		}
		n = addFav(cabecaA);	
		if (n == localiza){//há somente ele cadastrado 
			localiza->favorito = 's';
		}else if(localiza->ant->favorito == 's'){//se o anterior já é favorito
			localiza->favorito = 's';
		}else{
			if(localiza->prox == NULL){
				localiza->ant->prox = NULL;
				if (n->ant == NULL){
				  	if(n->favorito == 's'){
						localiza->ant = n;
						localiza->prox = n->prox;
						n->prox = localiza;
					}else{
						localiza->ant = NULL;
						localiza->prox = n;
						n->ant = localiza;
						cabecaL->Letra = localiza;
					}
				}else{
					localiza->ant = n;
					localiza->prox = n->prox;
					n->prox = localiza;
				}
			}else{
				localiza->ant->prox = localiza->prox;
				localiza->prox->ant = localiza->ant;
				if (n->ant == NULL){
				  	if(n->favorito == 's'){
						localiza->ant = n;
						localiza->prox = n->prox;
						n->prox = localiza;
					}else{
						localiza->ant = NULL;
						localiza->prox = n;
						n->ant = localiza;
						cabecaL->Letra = localiza;
					}
				}else{
					localiza->ant = n;
					localiza->prox = n->prox;
					n->prox = localiza;
				}
			}
			localiza->favorito = 's';
		}
}
lista *ordenar(lista *l, lista *ln){
	int verif = 0;
	lista *cmp, *ult;

	for(cmp = l; cmp != NULL; cmp = cmp->prox ){
		if (ln->letra < cmp->letra){
			verif = 1;
			if (cmp->ant == NULL){
				ln->ant = NULL;
				ln->prox = cmp;
				cmp->ant = ln;
				return ln;
			}else{
				cmp->ant->prox = ln;
				ln->ant = cmp->ant;
				ln->prox = cmp;
				cmp->ant = ln;
				return l;
			}
		}
		ult = cmp;
	}
	if (verif == 0){
			ult->prox = ln;
			ln->ant = ult;
			ln->prox = NULL;
			return l;
		}
}
lista *criaLista(lista *l, agenda *a){
	lista *novo, *busca;
	agenda *localiza;
	int verif=0;
	
	if (l != NULL){
		busca = procuraLetra(l, a->nome[0]);
		if (busca != NULL){
			localiza = busca->Letra;
			if (a->favorito == 's'){
				localiza = addFav(localiza);
				if ( localiza->favorito != 's'){
					a->ant = NULL;
					a->prox = localiza;
					localiza->ant = a;
					busca->Letra = a;
				}else{
					if(localiza->prox == NULL){
						localiza->prox = a;
						a->ant = localiza;
						a->prox = NULL;
					}else{
						a->prox = localiza->prox;
						localiza->prox->ant = a;
						localiza->prox = a;
						a->ant = localiza;
					}
				}
			}else{
				while(localiza->prox != NULL){//procura a última posição do contato da letra correspondente
					localiza = localiza->prox;
				}
				localiza->prox = a;//ultimo contato aponta para o novo contato
				a->ant = localiza;
				a->prox = NULL;//novo contato aponta para null
			}
			return l; 
		}else{//caso não exista letra já cadastrada
			novo = (lista*) malloc (sizeof (lista));//criasse novo nó da lista para guardar os contatos com a nova letra
			novo->letra = a->nome[0];
			novo->Letra = a;
			a->ant = NULL;
			a->prox = NULL;
			l = ordenar(l, novo);//chama função ordenar, envia o cabeça da lista e o novo nó
			return l;
		}
	}else{
		novo = (lista*) malloc (sizeof (lista));
		novo->letra = a->nome[0];
		novo->Letra = a;
		novo->ant = NULL;
		novo->prox = NULL;
		a->ant = NULL;
		a->prox = NULL;
		return novo;
	}
}
agenda *inserir(agenda *a){
	agenda *nova;
	char f;
		nova = (agenda*) malloc (sizeof (agenda));
		printf("Nome: ");
		fflush(stdin);
		gets(nova->nome);
		printf("Sobrenome: ");
		fflush(stdin);
		gets(nova->sNome);
		printf("Apelido: ");
		fflush(stdin);
		gets(nova->apelido);
		printf("Favorito (s/n): ");
		fflush(stdin);
		scanf("%c", &f);
		nova->favorito = f;
		fflush(stdin);
		return nova;
}
void editar(lista *l){
	
}
lista *remover(lista *l){
	int achou =0;
	char opc, nome[20], sobreN[50];
	lista *cabecaL;
	agenda *busca, *contato;
	do{
		imprimir(l, 1);
		printf("Qual deseja remover: ");
		printf("Nome: ");
		fflush(stdin);
		gets(nome);
		printf("Sobrenome: ");
		fflush(stdin);
		gets(sobreN);
		cabecaL = procuraLetra(l, nome[0]);
		if(cabecaL != NULL){
			busca = cabecaL->Letra;			
				while (busca != NULL){//percorre toda lista
					if (strcmp(busca->nome, nome) == 0 && strcmp(busca->sNome, sobreN) == 0){//compara todas letras existem com a primeira letra do novo nome
						achou = 1;
						contato = busca;
						if(contato->ant == NULL){
							if(contato->prox == NULL){
								if (cabecaL->ant == NULL){
									if(cabecaL->prox == NULL){
										cabecaL = iniciaL();
										free(contato);
										return cabecaL;
									}else{
										cabecaL->prox->ant = NULL;
										return cabecaL->prox;
									}
								}else{
									if(cabecaL->prox == NULL){
										cabecaL->ant->prox = NULL;
									}else{
										cabecaL->ant->prox = cabecaL->prox;
										cabecaL->prox->ant = cabecaL->ant;
									}
									free(cabecaL);
								}
							}else{
								cabecaL->Letra = contato->prox;
								contato->prox->ant = NULL;
							}
						}else if(contato->prox == NULL){
								contato->ant->prox = NULL;
						}else{
							contato->ant->prox = contato->prox;
							contato->prox->ant = contato->ant;
						}
						printf("Contato removido!!\n\n");
						printf("Deseja remover outro? (s/n)");
						fflush(stdin);
						scanf("%c", &opc);
						free(contato);
					}
					busca = busca->prox;
				}
				if(achou == 0){
					printf("Contato nao existe ou nao encontrado!!\n\n");
					printf("Deseja remover outro? (s/n)");
					fflush(stdin);
					scanf("%c", &opc);
				}
		}else{
			printf("Contato nao existe ou nao encontrado!!\n\n");
			printf("Deseja remover outro? (s/n)");
			fflush(stdin);
			scanf("%c", &opc);
		}
	}while(opc == 's');
	return l;
}

lista *criaContato(lista *l){
	char op;
	agenda *a;
	
	do{
		a = inserir(a);
		l = criaLista(l, a);
		printf("Inserir outro (s/n)");
		scanf("%c", &op);
	}while(op =='s');
	return l;
}
main(){
	lista *l;
	agenda *nova;
	l = iniciaL();
	nova = iniciaA();
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
		switch (opc){
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
	}
}
