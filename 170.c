#include <stdio.h>

void main(){
	int conta;
	int numsalas, i;
	printf("Informe a quantidade de salas do escritorio: ");
	scanf("%d", &numsalas);
	int vet[numsalas];
	// 0 para aberta e 1 para fechada
	
	// PRIMEIRA ETAPA
	for(i = 0; i<numsalas; i++){
		vet[i] = 0;
	}
	// SEGUNDA ETAPA
	for(i = 0; i<numsalas; i++){
		if((i+1) %2 ==0){
			vet[i] = 1;
		}
	}
	//TERCEIRA ETAPA
	for(i = 0; i<numsalas; i++){
		if((i+1) %3 ==0){
			if(vet[i] == 0){
				vet[i] = 1;
			}
			else{
				vet[i] = 0;
			}
		}
	}
	for(i = 0; i<numsalas; i++){
		if(vet[i]== 0){
			conta++;
		}
	}
	printf("O numero de portas abertas foi de %d",conta);
}
