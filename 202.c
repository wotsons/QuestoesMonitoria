/*Escreva um programa que leia o valor do raio de uma circunferência e calcule a sua  área e o seu 
comprimento. O programa deve fornecer um subprograma para calcular  a área e outro para calcular o 
comprimento.*/
 //   A = 2 * pi * r 
const float PI = 3.14; 
#include <stdio.h>

float area(float raio){
	return PI*(raio*raio);
}
float comprimento(float raio){
	return (PI*2)*raio;
}
void main(){
	float raio;
	printf("Informe o valor do raio de uma circunferencia: ");
	scanf("%f", &raio);
	float valor_area = area(raio);
	float valor_comprimento = comprimento(raio);
	printf("O valor da area eh de %.2f e o valor do comprimento eh de %.2f", valor_area,valor_comprimento);
}
