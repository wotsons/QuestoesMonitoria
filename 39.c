/*Escreva um programa que leia o tamanho de um arquivo em MB e a taxa de  transmiss�o da rede em KB/s e calcule o tempo aproximado necess�rio 
para a  transmiss�o do arquivo. A resposta deve ser dada atrav�s de uma mensagem na forma  X horas, Y minutos e Z segundos.  
*/

#include <stdio.h>
void main(){
	float mb;
	float taxa_transmissao;
	
	printf("Informe o tamanho do arquivo em MB: ");
	scanf("%f", &mb);
	
	float kb = mb*1024;
	
	printf("Informe a taxa de transmissao: ");
	scanf("%f", &taxa_transmissao);
	
	int time = kb/taxa_transmissao;
	printf("\nTempo = %d", time);
	int horas, minutos;
	horas = time/3600;
	time = time%3600;
	minutos = time/60;
	time = time%60;
	printf("\n%d horas, %d minutos e %d segundos", horas, minutos, time);
}
