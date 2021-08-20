#include <stdio.h>

void main(){
	int t_inicial, razao, num, i;
	
	printf("Informe o termo inicial: ");
	scanf("%d", &t_inicial);
	
	printf("Informe a razao: ");
	scanf("%d", &razao);
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	for(i = 1; i<=num; i++){
		printf("%d - ", t_inicial);
		t_inicial+=razao;

	}
}
