#include<stdio.h>
#include<string.h>
const int CONSTANTE=20;
void main(){
	int k,num;
	char vetor[CONSTANTE];
	int i=0;
	printf("Infore os caracteres da palavra:");
	for(k=0;k<CONSTANTE;k++){
		scanf("%c",&vetor[k]);
		fflush(stdin);
	}
	for(k=0;k<CONSTANTE;k++){
		if(vetor[k] != vetor[CONSTANTE-k-1]){
			printf("Nao eh palindromo");
			break;
		}
		if(k==CONSTANTE-1){
			printf("Eh palindromo");
		}
	}
}
