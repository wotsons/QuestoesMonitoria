/*Escreva um programa que leia tr�s n�meros inteiros distintos e identifique o maior
n�mero lido. Esta verifica��o deve ser realizada atrav�s de um subprograma.*/

#include<stdio.h>
int maior_num(int num1,int num2,int num3){
	int num;
	num = num1;
	if(num<num2){
		num = num2;
	}
	if(num<num3){
		num = num3;
	}
	return num;
}
void main(){
	printf("Informe 3 valores: ");
	int num1,num2,num3;
	scanf("%d%d%d", &num1,&num2,&num3);
	printf("O maior valor informado foi %d", maior_num(num1,num2,num3));
}
