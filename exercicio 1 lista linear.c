#include<stdio.h>
#include<conio.h>
#include<string.h>

int insere (int x[10]){
     int i=0;
     char n = 's';
     while (n == 's'){
		   printf("digite um valor: ");
           scanf("%d", &x[i]);
           i++;
           printf("inserir novo elemento (s/n): ");
           fflush(stdin);
           scanf("%c", &n);
           }
     return i;
}

int acessa (int x[10], int pos, int fim){
     if (pos < 0 || pos > fim){
        printf("posicao nao existe \n");
     	return -99; //definido como valor de erro   
	}
     else
         return x[pos];         
     }
     
int imprime (int x[10], int fim){
	int i;
	printf("\n");
	printf("|------------------|\n");
	printf("| lista completa   |\n");
	printf("|------------------|\n");
	for(i=0;i<fim;i++){
        printf("|  %d               |\n", x[i]); // imprime os elementos da lista atualizada
        }
    printf("|------------------|\n");
     printf("\n");   
     
}
     
void altera (int x[10], int pos, int fim, int valor){
     int i;
     if (pos < 0 || pos > fim){
        printf("posicao nao existe \n");
     	return;   
	}
     else
         x[pos] = valor;
         
     printf("\n");
     printf("\n");
	printf("|----------------------------|\n");
	printf("| lista completa modificada  |\n");
	printf("|----------------------------|\n");
	for(i=0;i<fim;i++){
        printf("|  %d                         |\n", x[i]); // imprime os elementos da lista atualizada
        }
    printf("|----------------------------|\n");
     printf("\n");  
     }
     
void novoElemento (int x[10], int pos, int fim, int valor){
     int i;
     if (pos < 0 || pos > fim){ // verifica se o usuario digitou uma posisao valida
        printf("posicao nao existe \n");
     	return;   
	}
     else
         for (i=fim; i>=pos; i--)
             x[i+1] = x[i];
         
     fim++;
     x[pos] = valor;
     
     printf("\n");
     for(i=0;i<fim;i++){
        printf("%d\n", x[i]);
        }
     printf("\n");   
}     

void retira (int x[10], int pos, int fim){
     int i;
     if (pos < 0 || pos > fim){
        printf("posicao nao existe \n");
     	return;   
	}
     else{
         for (i=pos; i<=fim; i++)
             x[i] = x[i+1];
     fim--;
 	}

     	printf("\n");
		printf("|----------------------------|\n");
		printf("| lista completa modificada  |\n");
		printf("|----------------------------|\n");
		for(i=0;i<fim;i++){
        	printf("|      %d                     |\n", x[i]);      // imprime os elementos da lista atualizada
        }
    	printf("|----------------------------|\n");
     	printf("\n");  
}  
 

int menu(){
	
    int op;
    printf("|-----------------------|\n");
    printf("| 1 - acessar elemento  |\n");
    printf("| 2 - alterar elemento  |\n");
    printf("| 3 - inserir elemento  |\n");
    printf("| 4 - remover elemento  |\n");
    printf("| 5 - mostrar elementos |\n");
    printf("| 6 - Sair              |\n");
    printf("|-----------------------|\n");
    printf("digite uma opcao: ");
    scanf("%d", &op);
    return op;
    }

main(){
	
      int v[10];
      int i, pos, fim, valor, op;
      fim = insere(v); // insere os elementos na lista e retorna o total (ultima posicao ocupada)
     
      op = menu();
      while (op != 6){
            if (op == 1){
                printf("digite a POSICAO para acessa-la: ");
                scanf("%d", &pos);
                valor = acessa(v, pos, fim);
                printf("valor da posicao %d: %d\n", pos, valor);
            }
                    	
            else if (op == 2){
                printf("\ndigite a POSICAO do valor a ser alterado: ");
                scanf("%d", &pos);
                printf("digite o novo VALOR: ");
                scanf("%d", &valor);
                altera(v, pos, fim, valor);
            }
            else if (op == 3){
                printf("\ndigite a POSICAO para o novo valor: ");
                scanf("%d", &pos);
                printf("digite o novo VALOR: ");
                scanf("%d", &valor);
                novoElemento(v, pos, fim, valor);
            }
            else if (op == 4){
                printf("\ndigite a POSICAO do valor para remove-lo: ");
                scanf("%d", &pos);
                retira(v, pos, fim);
            }
            else if (op == 5){
                imprime(v, fim);
            }
            op = menu();
    }
    system("pause");
}
