/*Escreva um programa que leia o valor do raio de uma esfera e determine o seu volume. O cálculo deve
ser realizado através de um subprograma*/

const float PI = 3.14; 
#include <stdio.h>
#include <math.h>
 float volume(float raio){
	return 4/3*(PI*pow(raio,3));
 }

void main(){
	float raio;
	printf("Informe o valor do raio de uma circunferencia: ");
	scanf("%f", &raio);
	float valor_volume = volume(raio);
	printf("O volume eh de %2.f ml",valor_volume);
}
