/*
2. Faça uma função recursiva que permita somar os elementos de um vetor de N valores inteiros.
*/

#include<stdio.h>
	
int soma (int v[], int n) { 
   if (n == 0){
      return 0;
	}
   else {
      int s;
      	
		s = soma (v, n-1);
      	
		  if (v[n-1] > 0){
	  		s += v[n-1];
      		return s;
  		}
}
}

int main() {
    int n;
    int *v;
    int i;
    int resultado;
    
    printf("qual o tamanho do vetor: ");
    scanf("%d", &n);
    
    v = (int *)malloc(n * sizeof(int));
    
    for (i = 0; i < n; ++i) {
         v[i] = i;
    }
    
    printf("\nvetor completo\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", v[i]);
    }
	
	soma(v, n);
	resultado = soma(v, n);
	printf("\n\nresultado da soma: %d", resultado);
	
  printf("\n\n");
	
system("pause");
}	
