#include<stdio.h>
void main(){
	int vetor[10];
	int k,i,j,aux;
	
	for (k=0; k<10; k++){
		scanf("%d", &vetor[k]);
	}
	for (i = 0; i <10 ; i++){
		for (j = i+1; j<10; j++){
			if(vetor[i] > vetor [j]){       
				aux = vetor[i]; 					
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	printf("Resultado: \n");
	for (k=0; k<10; k++){
		printf("%d\n", vetor[k]);
	}
	
}
