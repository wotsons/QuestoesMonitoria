#include <stdio.h>

void main(){
	int i,aux;
	char vetor[20];
	
	for(i = 0; i<= 20; i++){
		printf("informe um caractere: \n");
		scanf("%c",&vetor[i]);
		fflush(stdin);
	}
	for(aux = 0; aux <=9; aux++){
		if(vetor[aux]!=vetor[19-aux]){
			printf("nao eh palindromo");
			break;
		}
		if(aux == 9){
			printf("eh palindromo");
		}
	}
	
}
