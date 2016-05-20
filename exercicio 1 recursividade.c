/*

1. Desenvolva um algoritmo com uma função recursiva que permita inverter um número inteiro N. Ex: 123 – 321.

*/

#include<stdio.h>

int inverte(int a){
	
    if(a==0){
      return a;
     
	}
    else{
     printf("%d", a % 10);
     a=a / 10;
     return inverte(a);
    }
return 0;
 }
int main(){
	int num;
	
   printf("Digite um numero:");
   scanf("%d",&num);
   
   inverte(num);

system("pause");
}

