#include <stdio.h>

void main(){
	int num, soma;
	float resto;
	printf("Digite o numero: ");
	scanf("%d", &num);
	float dividido = num;
	
	while(dividido >= 10){
		dividido = dividido/10;
	}
	printf("%f", dividido);
	printf("%d", (int)dividido);
	int resultado = (int) dividido;
	
}
