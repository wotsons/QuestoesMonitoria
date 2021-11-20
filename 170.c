#include <stdio.h>

void main(){
	int conta;
	int numsalas, i, mult;
	printf("Informe a quantidade de salas do escritorio: ");
	scanf("%d", &numsalas);
	int vet[numsalas];
	// 0 para aberta e 1 para fechada
	
	for(i = 0; i<numsalas; i++){ 
		vet[i] = 0;   						// iguala a 0 todos as possições do vetor
	}

	for(mult = 2; mult <= numsalas; mult++){  //Laço para atualizar o multiplo
		for(i = 0; i<numsalas; i++){
			if((i+1) %mult ==0){
				if(vet[i] == 0){
					vet[i] = 1;        // Inverte o valor contido no vetor
				}
				else{
					vet[i] = 0;
				}
			}
		}
	}
	for(i = 0; i<numsalas; i++){
			if(vet[i]== 0){
				conta++;   // Conta o numero de portas abertas
			}
		}
	printf("O numero de portas abertas foi de %d",conta);
}
