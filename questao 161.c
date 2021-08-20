#include <stdio.h>
void main(){
	int k,num = 0;
	char vetor[20];
	int i = 0;
	printf("Informe os caracteres da palavra: ");
	for(k=0; k<20;k++){
		scanf("%c",&vetor[k]);
	}
	for(k=0; k<20;k++){
		if(vetor[k] != vetor[20-k-1]){
			printf("Nao eh palindromo");
			break;
		}
		if(k==20-1){
			printf("Eh palindromo");
		}
	}
}
