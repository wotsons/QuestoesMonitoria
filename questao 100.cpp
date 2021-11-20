#include <stdio.h>
int main(){
	int num,k, resultado, primos, gemeos, num1;
	for(num = 1; primos <= 6; num++){
		for (k = 2; k <= num / 2; k++) {
		    if (num % k == 0) {
		       resultado++;
		       break;
		    }
		}
		if (resultado == 0 && num!= 1){
		 	primos++;
		    if(num1 == 0){
		    	num1 = num;
			}
		    else{
		    	gemeos = num - num1;
		    	if(gemeos == 2){
		    		printf("\n%d e %d sao gemeos\n", num1, num);
				}
				else{
					printf("\n%d e %d nao sao gemeos\n", num1, num);
				}
				num1 = 0;
			}
		}
		else{
		 	resultado = 0;
		    printf("%d nao eh um numero primo\n", num);
		}
	}
}
