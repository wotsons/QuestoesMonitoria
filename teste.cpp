#include <stdio.h>

void main(){
	double numero = 4;
	float divisor = 3;
	int precisao,casas = 0;
	while(precisao <=0){
		printf("informe o tamanho da precisao que deseja: ");
		scanf("%d", &precisao);
	}


	while(casas != precisao){
		
		numero = numero - (4/divisor);
		divisor+=2;	
		casas++;
		
		if(casas != precisao){
			numero = numero + (4/divisor);
			divisor+=2;	
			casas++;
		}
		
	}
	printf("numero = %f | casas = %d | divisor = %f", numero, casas,divisor);
}
