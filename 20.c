/*20. Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 300,00.  Escreva um programa 
que leia o comprimento e a largura de um terreno localizado  nesta cidade e calcule o seu valor de mercado.*/

#include <stdio.h>

void main(){
	float comprimento, largura;
	
	printf("Informe o comprimento do terreno: ");
	scanf("%f", &comprimento);
	
	printf("Informe o largura do terreno: ");
	scanf("%f", &largura);
	
	float area = comprimento*largura;

	printf("\nO valor total foi de RS %2.f", area*300);
	
}
