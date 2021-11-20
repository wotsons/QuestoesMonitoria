#include <stdio.h>

void main(){
	
	int n, soma = 0;
	printf("Informe o termo inicial: ");
	scanf("%d", &n);
	int num = 0;
	
	while(soma <= n){
		
		if(soma+num > n){
			break;
		}
		
		else{
			printf(" %d +", num);
			soma+=num;
		}
		num++;
	}
	printf("\n Soma = %d", soma);
	
	
	
	/*
	int numero;
	printf("Escolha um numero.\n");
	scanf("%d", &numero);
	int k, soma = 0;
	
	printf("0 ");
	
	for (k=1; soma<numero; k++){
		soma+=k;
		
		if (soma<=numero){
			printf("+ %d ", k);
		}
		
	}
	printf("\n Soma = %d", soma);
	getch();
	*/
}
