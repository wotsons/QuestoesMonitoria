/*30. Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e  determine a 
dist�ncia entre estes dois pontos. A dist�ncia entre dois pontos pode ser  determinada atrav�s da dist�ncia
 euclidiana. */
 
#include <stdio.h>
#include <math.h>
void main(){
	int x,y,q,p;
	
	printf("Informe as coordenadas X e Y: ");
	scanf("%d%d", &x,&y);
	
	printf("Informe as coordenadas Q e P: ");
	scanf("%d%d", &q,&p);
	
	int distancia = sqrt(pow((x-q),2) + pow((y-p),2));
	
	printf("Distancia: %d", distancia);
}
