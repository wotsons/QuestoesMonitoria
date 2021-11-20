#include <stdio.h>
void main(){
	int k,num = 0;
	int numeros[40];
	int i = 0;
	
	do{
		printf("Informe a posicao desejada: ");
		scanf("%d",&num);
	}
	while(num < 0 || num>255);
	
	while(num/2 != 0){
		numeros[i] = num%2;
		num = num/2;
		i++;
		
		if(num == 1){
			numeros[i] = 1;
		}
	}
	for(k = 0; k <= i; k++){
		printf("%d", numeros[k]);
	}
}
