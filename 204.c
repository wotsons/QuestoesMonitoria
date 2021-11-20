/*Escreva um programa que leia o valor de cinco temperaturas em Celsius e, para cada  valor lido,
 calcule o seu valor correspondente em Fahrenheit e em Kelvin. Os cálculos  das conversões devem
ser realizados através de subprogramas*/

#include <stdio.h>
float fahrenheit(float celsius){
	//float f;
	//f = c(f-32)/1.8;
	return celsius*1.8+32;
}
float kelvin(float celsius){
	return celsius+273;
}
void main(){
	int i;
	float celsius;
	for(i=0;i<=5;i++){
		printf("informe um valor em celsius: ");
		scanf("%f", &celsius);
		printf("\nO valor em em Fahrenheit eh de %.2f e em Kelvin eh de %.2f\n", fahrenheit(celsius),kelvin(celsius));
	}
}
