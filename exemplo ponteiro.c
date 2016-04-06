#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
	
      int num;
      int *pnum;
      
      	printf("informe um valor: ");
      	scanf("%d", &num);
      
	  	printf("a variavel eh: %d \n", num);
	  	
      	pnum = &num;
      	*pnum = 1;
    	
		printf("a variavel alterada eh: %d \n", num);
      
system("pause");
}
