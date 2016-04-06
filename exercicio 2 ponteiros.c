#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
	
      int num1, num2;
      int *pnum1, *pnum2;
      
      	printf("informe a variavel 1: \n");
      	scanf("%d", &num1);
      	
      	printf("informe a variavel 2: \n");
      	scanf("%d", &num2);
      	
      	pnum1 = &num1;
      	pnum2 = &num2;
      	
      	printf("----------------------------------------------------------------------------|\n");
      	printf("|   o valor na variavel 1 eh: %d                                            |\n", num1);
	  	printf("|   o valor na variavel 2 eh: %d                                            |\n", num2);
	  	printf("|   o endereco da variavel 1 eh: %x                                     |\n", &num1);
	  	printf("|   o endereco da variavel 2 eh: %d                                    |\n", &num2);
	  	printf("|   o valor do ponteiro da variavel 1 eh: %x                            |\n", &num1);
	  	printf("|   o valor do ponteiro da variavel 2 eh: %x                            |\n", &num2);
	  	printf("|   o endereco de memoria da variavel 1 eh: %x                               |\n", num1);
	  	printf("|   o endereco de memoria da variavel 2 eh: %x                              |\n", num2);
	  	printf("|   o valor apontado pelo ponteiro de memoria da variavel 1 eh: %d          |\n", *pnum1);
	  	printf("|   o valor apontado pelo ponteiro de memoria da variavel 2 eh: %d          |\n", *pnum2);
	  	printf("----------------------------------------------------------------------------|\n");
	  	
      	    	
		      
system("pause");
}
