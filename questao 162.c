#include <stdio.h>
void main(){
	int bin[8];
	int num,k, i = 0;
	do{
		printf("Informe um valor entre 0 e 255: ");
		scanf("%d", &num);
	}
	while(num < 0 || num > 255);
	while(num > 1){
		bin[i] = num%2;
		num = num/2;
		i++;
		if(num <= 1){
			bin[i] = num;
		}
	}
	for(k = i; k>=0; k--){
		printf("%d", bin[k]);
	}
}
