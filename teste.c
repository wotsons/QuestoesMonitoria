#include<stdio.h>
void main(){
	int numero, divisao, soma = 0, divisaoResto;
	printf("Informe um numero para checar a soma de seus algarismos.\n");
	scanf("%d", &numero);
	
	while (numero>=1){
		divisao = numero / 10;
		divisaoResto = numero % 10;
		soma += divisaoResto;
		numero = divisao;
	}
	
	printf("A soma dos algarismos sera %d.", soma);
	getch();
}
