#include <stdio.h>
int main(){
	int numprimo,k;
	int numero;
	int cont = 0;
	printf("Informe um numero inteiro: ");
	scanf("%d", &numero);
	int resultado;
	for(numprimo=2; numero/numprimo>0; numprimo++){
		for (k = 2; k <= numprimo / 2; k++) {
		    if (numprimo % k == 0) {
		       resultado++;
		       break;
		    }
		 }
		 
		if (resultado == 0){
			
        	while(numero%numprimo == 0){
        		numero = numero/numprimo;
        		cont++;
			}
			
			if(cont > 1){
				printf("%d^%d X ", numprimo,cont);
				cont=0;
			}
			else if(cont == 1){
				printf("%d X ", numprimo);
				cont=0;
			}
		}
		
		else{
		 	resultado = 0;
		}
	}
}
