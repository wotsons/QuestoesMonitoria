/*Escreva um programa que represente um jogo de campo minado. Para o jogo, 20
bombas devem ser espalhadas aleatoriamente sobre o tabuleiro, que é representado
por uma matriz quadrada de ordem 10. O programa deve ter um subprograma que
recebe como entrada uma matriz, o valor de uma linha e o valor de uma coluna e
calcula quantas bombas existem ao redor da posição indicada pelos valores das
linhas e das colunas.*/
int const ORDEM = 10;
#include<stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>

int aleatorio(int matriz, int coluna, int linha){
	return rand()%2;
}

void main(){
	int vet[10][10];
	int k,l,cont = 0;
	int random;
	srand(time(NULL));
	for (k=0; k<ORDEM; k++){
		if(cont == 20){
				break;
			}
		for (l=0; l<ORDEM; l++){
			random = aleatorio();
			vet[k][l] = random;
			if(random == 1){
				cont++;
			}
			if(cont == 20){
				break;
			}
		}
	}
	for (k=0; k<ORDEM; k++){
		for (l=0; l<ORDEM; l++){
			printf("%d ",vet[k][l]);
			if(l==ORDEM-1){
				printf("\n");
			}
		}
	}
	
	
	
}
