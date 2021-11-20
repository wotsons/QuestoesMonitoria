/*40. Escreva um programa que leia o valor total que um cliente consumiu em um  restaurante e determine o 
valor final da sua conta, considerando que o restaurante  cobra uma taxa de serviço de 10 % e uma taxa de 
couvert artístico de R$ 10,00.*/

#include<stdio.h>

void main(){
	float valor;
	printf("Informe o valor consumido pelo cliente: ");
	scanf("%f", &valor);
	
	valor = valor + valor/10 + 10;
	printf("\nO valor final foi de: %2.f", valor);
}
