/*52. Um provedor de internet oferece um plano promocional para os seus clientes. Neste  plano, ele paga 
uma mensalidade de R$ 80,00 e pode acessar até 100 GB de dados.  Caso a quantidade de dados acessados seja
 superior a este limite, ele deve pagar uma  taxa adicional de R$ 5,00 por cada GB extra acessado. Com 
 base nestas informações,  escreva um programa que leia a quantidade de dados acessados pelo cliente 
 durante  um mês (em GB) e calcule o valor da sua conta, considerando que esta quantidade  nunca é 
 inferior a 100 GB */
 
 #include <stdio.h>
 
 void main(){
 	int dados;
 	float valor;
 	printf("Informe a quantidade de GB usados: ");
 	scanf("%d", &dados);
 	if(dados > 100){
 		valor = 80 + ((dados-100)*5);
		printf("O valor da mensalidade foi de %2.f reais", valor);
	 }
	else {
		printf("O valor da mensalidade foi de 80 reais", valor);
	}

 }
