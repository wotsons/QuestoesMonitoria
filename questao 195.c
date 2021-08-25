int const ORDEM = 10;
#include<stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>



void aleatorio(int tabuleiro[ORDEM][ORDEM], int n, int m){
	int k,l;
	int cont = 0;
	for (k=n-1; k<=n+1; k++){
		for (l=m-1; l<=m+1; l++){
			if(n != k || m!= l){
				if(tabuleiro[k][l] == 1){
					cont++;
				}
			}
		}
	}
	printf("\n===================================\n");
	printf("Existem %d bombas ao redor", cont);
	printf("\n===================================\n\n");
}


void main (){
	srand(time(NULL));
	int k, l, bombas = 0;
	int tabuleiro[ORDEM][ORDEM];
	while (bombas!=20){
		bombas = 0;
		for (k=0; k<ORDEM; k++){
			for (l=0; l<ORDEM; l++){
				tabuleiro[k][l] = rand() %4;
				if (tabuleiro[k][l]==1){
					bombas++;
				}
				if (bombas==20) break;
			}
			if (bombas==20) break;
		}
		for (k=0; k<ORDEM; k++){
			for (l=0; l<ORDEM; l++){
				if (tabuleiro[k][l]!=1){
					tabuleiro[k][l] = 0;
				}
			}
		}
	}
	int n,m;
	for(k = 0; k < 20; k++){
		printf("Informe a posicao: ");
		scanf("%d%d", &n,&m);
		aleatorio(tabuleiro,n,m);
	}
}
