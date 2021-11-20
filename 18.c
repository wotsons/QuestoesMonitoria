//18. Escreva um programa que leia o valor do seno de um ângulo e calcule o valor do seu  cosseno.
#include <stdio.h>
#include <math.h>
void main(){
	int nominador, denominador;
	
	printf("Informe o nomidaor e denominador do Seno de um angulo: ");
	scanf("%d%d", &nominador, &denominador);
	
	nominador = nominador*nominador;
	int new_denominador = denominador*denominador;
	nominador = sqrt(new_denominador-nominador);
	
	printf("\n   %d   ",nominador);
	printf("\n ----- ");
	printf("\n   %d   ",denominador);
}
