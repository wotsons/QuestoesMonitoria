/*Escreva um programa que leia um vetor de 10 n�meros inteiros e, a seguir, leia um
n�mero inteiro N entre 1 e 10 e verifique quantas sequ�ncias de tamanho N formada
por elementos consecutivos existem no vetor, de forma que todos os elementos da
sequ�ncia estejam ordenados em ordem crescente. Por exemplo, no vetor (0, 6, 8,
10, 4, 3, 5, 9, 2, 15), podemos encontrar tr�s sequencias de tr�s (N=3) elementos (0,
6, 8), (6, 8, 10), (3, 5, 9) em ordem crescente.*/

#include <stdio.h>
void main(){
	int i, num, aux = 0, k,j;
	int vet[10];
	for(i = 0; i<10; i++){
		printf("Informe o valor da posicao %d: ", i);
		scanf("%d", &vet[i]);
	}
	do{
		printf("Informe o valor entre 1 e 10: ");
		scanf("%d", &num);
	}
	while(num >10 || num<1);
	int teste [num];
	
	for(aux = 0; aux<11-num; aux++){
		for(i = 0; i < num; i++){
			teste[i] = vet [i+aux];
		}
		for(k = 0; k < num; k++){
			if(teste[k] > teste [k+1]){
				break;
			}
			if(k == num-2){
				printf("(");
				for(j = 0; j < num; j++){
					printf(" %d ", teste[j]);
				}
				printf(")\n");
			}
		}
	}
}
