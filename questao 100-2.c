#include<stdio.h>
void main(){
	int quantidade;
	printf("Escolha a quantidade de primos gemeos que voce deseja ver.\n");
	scanf("%d", &quantidade);
	int k, i, a, divisao, subtracao, primo = -1, numero = 1;
	for(k=1; k<=quantidade; ){
		a = 0;
		numero++;
		
		for (i=1; i<=numero; i++){
			divisao = numero % i;
			
			if (divisao==0){
				a++;
			}
		}
		if (a==2){
			subtracao = numero - primo;
			
			if (subtracao==2){
				printf("\n%d e %d sao primos gemeos.", primo, numero);
				k++;
			}
			
			primo = numero;
		}
		
	}
	
	getch();
}
