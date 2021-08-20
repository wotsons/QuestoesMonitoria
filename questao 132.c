#include <stdio.h>

void main(){
	int num, i;
	printf("Informe um numero: ");
	scanf("%d",&num);
	int conta = 0;
	for(i = num; i > 0; i--){
		
		printf("*");
		
		if(i  == 1){
			printf("\n");
			
			i=num-conta;
			conta++;
			
		}
	}
}
