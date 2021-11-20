/*25. Escreva um programa que leia um número inteiro N e imprima dos 10 primeiros  elementos da sua tabuada. A saída do programa deve seguir 
o formato abaixo, que  mostra os 5 primeiros elementos da tabuada do 2. */

#include <stdio.h>

void main(){
	int n;
	
	printf("Informe um numero inteiro :\n");
	scanf("%d", &n);
	
	printf("\n1 X %d = %d",n,n*1);
	printf("\n2 X %d = %d",n,n*2);
	printf("\n3 X %d = %d",n,n*3);
	printf("\n4 X %d = %d",n,n*4);
	printf("\n5 X %d = %d",n,n*5);
	printf("\n6 X %d = %d",n,n*6);
	printf("\n7 X %d = %d",n,n*7);
	printf("\n8 X %d = %d",n,n*8);
	printf("\n9 X %d = %d",n,n*9);
	printf("\n10 X %d = %d",n,n*10);
}
