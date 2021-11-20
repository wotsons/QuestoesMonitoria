#include <stdio.h>
void main(){
	int vetor[10];
	int k,num;
	printf("Informe 10 valores: ");
	for(k=0; k<10;k++){
		scanf("%d",&vetor[k]);
	}
	printf("informe um valor: ");
	scanf("%d",&num);
	
	for(k=0; k<10;k++){
		if(vetor[k] == num){
			printf("\nO valor %d aparece na posicao: %d", num, k);
		}
	}
}
