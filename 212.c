/*Escreva um programa que leia o n�mero total de quest�es existentes em uma prova  e o n�mero de 
quest�es que um candidato acertou e determine o seu percentual de acertos e o seu percentual de 
erros. O c�lculo deve ser realizado atrav�s de um  subprograma.*/
#include <stdio.h>
void calculo(int num_questoes, int acertos){
	int erros = num_questoes-acertos;
	float percentual_acertos = (float)acertos/num_questoes;
	float percentual_erros = (float)erros/num_questoes;
	printf("\nO percentual de acertos foi de %.2f%%\n", percentual_acertos*100);
	printf("\nO percentual de erros foi de %.2f%%\n", percentual_erros*100);
}
void main(){
	int num_questoes;
	int acertos;
	printf("Informe o numero de questoes: ");
	scanf("%d", &num_questoes);
	printf("Informe o numero de acertos: ");
	scanf("%d", &acertos);
	calculo(num_questoes,acertos);
}
